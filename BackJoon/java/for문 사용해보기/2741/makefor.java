import java.util.*;

public class makefor {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num>1000000)
		{
			System.out.println("���ڿ���");
		}
		else
		{
			for(int i=1; i<=num; i++)
			{
				System.out.println(i);
			}
		}

	}

}
