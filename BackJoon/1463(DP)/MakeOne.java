import java.util.*;

public class MakeOne {
	int num;
	int arr[];

	public MakeOne(int num) {
		// TODO Auto-generated constructor stub
		this.num = num;
		this.arr = new int[num+1];
		
		calculate(num);
	}

	private void calculate(int num) {
		// TODO Auto-generated method stub
		arr[0] = arr[1] = 0;
		
		for(int i=2; i<=num; i++)
		{
			arr[i] = arr[i-1] + 1;
			
			if(i%2==0) arr[i]= Math.min(arr[i], arr[i/2]+1);
			if(i%3==0) arr[i]= Math.min(arr[i], arr[i/3]+1);
		}
		
		System.out.println(arr[num]);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		Scanner sc = new Scanner(System.in);
		
		num = sc.nextInt();
		
		if(num<1 || num>1000000)
		{
			System.out.println("1~1000000 안의 숫자를 입력해주세요.");
		}
		else
		{
			MakeOne makeone = new MakeOne(num);
		}
	}
}
