package paralleliterator;

import pi.ParIterator;

public class WorkerThread extends Thread {
		
	private ParIterator<JobClass> pi = null;
	private int id = -1;

	public WorkerThread(int id, ParIterator<JobClass> pi) {
		this.id = id;
		this.pi = pi;
	}

	public void run() {
		while (pi.hasNext()) {
			JobClass element = pi.next();
			System.out.println("Thread " + id + " got element: " + element);
			element.execute();
		}
		System.out.println("    Thread "+id+" has finished.");
	}
}
