import java.util.*;

public class MakeSum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		int sum = 0;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num<1 || num>100000)
		{
			System.out.println("숫자오류");
		}
		else
		{
			for(int i=1; i<=num; i++)
			{
				sum+=i;
			}
		}
		
		System.out.println(sum);

	}

}
