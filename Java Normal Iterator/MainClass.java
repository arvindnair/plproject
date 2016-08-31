import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;

public class MainClass {

	public static void main(String[] args) {
		
		List<JobClass> list = new ArrayList<JobClass>();
		for (int i=0;i<16;i++)
		{
			list.add(new JobClass());
		}
		
		Iterator<JobClass> Iter = list.iterator();
		final long startTime = System.currentTimeMillis();
		
		int i=0;
		while  (Iter.hasNext())
		{
			System.out.println(i);
			Iter.next().execute();
			i++;
		}
		
		final long endTime = System.currentTimeMillis();
		System.out.println("The total time: "+(endTime-startTime));

	}

}
