class QueueClient
{
	public static int[] readInts(String name)
	{
		In in = new In(name);
		Queue<Integer> q = new Queue<Integer>();
		while(!in.isEmpty())
		{
			q.enqueue(in.readInt());
			System.out.println(q);
		}

		int N = q.size();
		int[] a = new int[N];
		for (int i = 0; i < N; i++) 
		{
			a[i] = q.dequeue();
			System.out.println(q);
		}
		return a;
	}


	public static void main(String[] args) 
	{
		readInts("/home/semproms/hola.txt");
	}
}