import java.util.*;

public class StarStarStarStar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num<1 || num>100)
		{
			System.out.println("숫자오류");
		}
		else
		{
			for(int i=1; i<=num; i++)
			{
				if(i!=1)
				{
					for(int k=1; k<i; k++)
					{
						System.out.print(" ");
					}
				}
				
				for(int j=num; j>=i; j--)
				{
					System.out.print("*");
				}
				System.out.println("");
			}
		}


	}

}
