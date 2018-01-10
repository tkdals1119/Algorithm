import java.util.*;

public class no1110 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num, savenum, first, second;
		int count = 0;

		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();

		savenum = num;

		while (true)
		{
			first = num % 10;
			second = ((num / 10) + (num % 10)) % 10;
			num = first * 10 + second;
			count++;

			if (num == savenum)
			{
				System.out.println(count);
				break;
			}

		}

	}

}
