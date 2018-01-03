import java.util.*;

public class Gugudan {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num<1 || num>9)
		{
			System.out.println("숫자오류");
		}
		else
		{
			for(int i=1; i<=9; i++)
			{
				System.out.println(num+" * "+i+" = "+num*i);
			}
		}


	}

}
