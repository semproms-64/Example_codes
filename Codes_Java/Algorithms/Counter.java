public class Counter
{
	private final String id;
	private int count;

	public Counter(String id)
	{
		this.id = id;
	}

	public void increment()
	{
		count++;
	}

	public int tally()
	{
		return count;
	}

	public String toString()
	{
		return count + " " + this.id;
	}
}