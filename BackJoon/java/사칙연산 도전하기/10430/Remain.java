import java.util.Scanner;

public class Remain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num1, num2, num3;
		
		Scanner sc = new Scanner(System.in);
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		num3 = sc.nextInt();
		
		if(num1<2 || num1>10000) System.out.println("숫자오류");
		else if(num2<2 || num2>10000) System.out.println("숫자오류");
		else if(num3<2 || num3>10000) System.out.println("숫자오류");
		else
		{
			System.out.println((num1+num2)%num3);
			System.out.println((num1%num3 + num2%num3)%num3);
			System.out.println((num1*num2)%num3);
			System.out.println((num1%num3*num2%num3)%num3);
		}

		
		
	}
}
