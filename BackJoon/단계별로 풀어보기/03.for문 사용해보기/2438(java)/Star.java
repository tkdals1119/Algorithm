import java.util.*;

public class Star {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num<1 || num>100)
		{
			System.out.println("���ڿ���");
		}
		else
		{
			for(int i=1; i<=num; i++)
			{
				for(int j=1; j<=i; j++)
				{
					System.out.print("*");
				}
				System.out.println("");
			}
		}


	}

}
