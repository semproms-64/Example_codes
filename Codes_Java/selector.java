import java.util.Random;

class selector
{
	public static void main(String[] args) 
	{
		Random rand = new Random();
		for (int var = 5; var > 0; var--) 
		{
			try
			{
				System.out.println("Wait "+var);
				Thread.sleep(1000);	
			}
			catch(Exception e) 
			{
				System.err.println("Something went wrong!");
			}	
		}

		System.out.println("Soution: "+args[rand.nextInt((args.length-1)) + 1]);

	}
}