public class fibonacci
{

	public static int fibo(int n)
	{
		if (n <= 1) {
			return n;
		}
		else
			return fibo(n-1) + fibo(n-2);
	}

	public static void main(String[] args) {
			for (int in = 0; in < 25; in++) {
				System.out.println(fibo(in));
			}
	}
}