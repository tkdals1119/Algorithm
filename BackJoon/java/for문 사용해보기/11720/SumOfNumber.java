import java.util.*;

public class SumOfNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		int num2;
		int num3=1;
		int sum=0;
		int[] arr;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		num2 = sc.nextInt();
				
		arr = new int[num];
		
		for(int i=1; i<=num; i++)
		{
			num3*=10;
		}
		
		for(int i=0; i<num; i++)
		{
			arr[i] = num2/num3;
			num2%=num3;
			num3/=10;
		}

		for(int i=0; i<num; i++)
		{
			sum+=arr[i];
		}
		
		System.out.println(sum+1);
		
	}

}
