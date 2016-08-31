package paralleliterator;

public class JobClass {

	void execute ()
	{
		double[] results = new double[10000000];
		for (int i=0;i<10000000;i++)
		{
			results[i] = Math.pow(i, 1.5);
		}
	}
	
}
