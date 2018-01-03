import java.util.*;

public class makeforminus {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		
		if(num>1000000)
		{
			System.out.println("숫자오류");
		}
		else
		{
			for(int i=num; i>=1; i--)
			{
				System.out.println(i);
			}
		}

	}

}
