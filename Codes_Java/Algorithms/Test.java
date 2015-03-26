class Test
{
	public static void main(String[] args) 
	{
		try
		{
			int m = Integer.parseInt(args[0]);
			int d = Integer.parseInt(args[1]);
			int y = Integer.parseInt(args[2]);
			Date date = new Date(m,d,y);
			StdOut.println(date);	
		}
		catch(Exception e)
		{
			System.err.println("The number of arguments is wrong!");
			System.err.print("Example: ");
			System.err.println("%java Test month day year");
		}
	}
}