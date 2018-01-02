import java.util.*;

public class no11720 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		int sum=0;
		String str;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		str = sc.next();
		
		for(int i=0; i<num; i++)
		{
			sum+=(str.charAt(i)-'0');
		}
		
		System.out.println(sum);
	}

}
