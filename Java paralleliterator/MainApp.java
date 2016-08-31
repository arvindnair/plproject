package paralleliterator;

import pi.ParIterator;
import pi.ParIteratorFactory;
import java.util.*;

public class MainApp {
	
    public static Collection<JobClass> getElements() {
	List<JobClass> list = new ArrayList<JobClass>();
	for (int i=0;i<16;i++)
	{
		list.add(new JobClass());
	}
	return list;
    }

    public static void main(String[] args) {
		
	int threadCount = 4;
		
	// Get a Parallel Iterator for the collection of elements
	Collection<JobClass> elements = getElements();
	ParIterator<JobClass> pi = ParIteratorFactory.createParIterator(elements, threadCount);
 
	// Create and start a pool of worker threads
	Thread[] threadPool = new WorkerThread[threadCount];
	
	final long startTime = System.currentTimeMillis();
	for (int i = 0; i < threadCount; i++) {
	    threadPool[i] = new WorkerThread(i, pi);
	    threadPool[i].start();
	}
		
	// ... Main thread may compute other (independent) tasks

	// Main thread waits for worker threads to complete
	for (int i = 0; i < threadCount; i++) {
	    try {
		threadPool[i].join();
	    } catch(InterruptedException e) {
		e.printStackTrace();
	    }
	}
	
	final long endTime = System.currentTimeMillis();
	System.out.println("The total time: "+(endTime-startTime));
	System.out.println("All worker threads have completed.");
    }
}

