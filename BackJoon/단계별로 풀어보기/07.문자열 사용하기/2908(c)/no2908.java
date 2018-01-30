import java.util.*;
public class no2908 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1;
		String str2;
		int num1, num2;

		Scanner sc = new Scanner(System.in);
		str1 = sc.next();
		str2 = sc.next();
		
		if(str1.equals(str2)) System.out.println("두 수는 같지 않아야 합니다.");
		else
		{
			num1 = ((str1.charAt(2)-'0')*100) + ((str1.charAt(1)-'0')*10) + ((str1.charAt(0)-'0')*1);
			num2 = ((str2.charAt(2)-'0')*100) + ((str2.charAt(1)-'0')*10) + ((str2.charAt(0)-'0')*1);
			
			if(num1>num2) System.out.println(num1);
			else System.out.println(num2);
		}		
	}
}
