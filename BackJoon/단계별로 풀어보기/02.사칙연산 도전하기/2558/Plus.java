import java.util.*;

public class Plus {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num1, num2;
		
		Scanner sc = new Scanner(System.in);
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		
		if(num1<0 || num2>10)
		{
			System.out.println("숫자오류");
		}
		else
		{
			System.out.println(num1+num2);
		}
	}
}
