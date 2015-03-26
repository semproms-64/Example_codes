public class Date
{
	private final int month;
	private final int day;
	private final int year;

	public Date(int month, int day, int year)
	{
		this.month = month;
		this.day = day;
		this.year = year;
	}

	public int month()
	{
		return month;
	}

	public int year()
	{
		return year;
	}

	public int day()
	{
		return day;
	}

	public String toString()
	{
		return month+"/"+day+"/"+year;
	}
}