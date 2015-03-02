import java.util.*;

public class next_book
{

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Welcome!");
		System.out.print("Type the number of books, please: ");
		int SIZE = keyboard.nextInt();

		String list_books[] = new String[SIZE];
		for (int i = 0; i < list_books.length; i++) {
			System.out.print("Insert book "+i+" -> ");
			list_books[i] = keyboard.next();
		}
		for (int i = 0; i < list_books.length; i++) {
			System.out.println(list_books[i]);
		}

	}
}
