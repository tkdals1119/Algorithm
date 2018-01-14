import java.util.*;
public class no1065 {

	static int cal(int i)
	{
		int arr[];
		if (i == 1000) return 0;
		else
		{
			arr = new int[2];
			arr[0] = ((i % 100) / 10) - (i / 100);
			arr[1] = ((i % 100) % 10) - ((i % 100) / 10);

			if (arr[0]==arr[1]) return 1;
			else return 0;
		}			
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int num = 0;
		int count = 0;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();

		if (num < 100) System.out.println(num);
		else if (num > 1000) System.out.println("1~1000 사이의 숫자로 입력해주세요");
		else
		{
			for (int i = 100; i <= num; i++)
			{
				if (cal(i) == 1) count++;
			}
			System.out.println(count+99);
		}
	}
}
