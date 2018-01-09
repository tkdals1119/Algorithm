import java.util.*;

public class no1546 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arrsize;
		int arr[];
		double arr2[];
		int max=0;
		double sum=0;
		
		Scanner sc = new Scanner(System.in);
		arrsize = sc.nextInt();
		
		arr = new int[arrsize];
		arr2 = new double[arrsize];

		for(int i=0; i<arrsize; i++)
		{
			arr[i] = sc.nextInt();
			
			if(arr[i]>=max)
			{
				max = arr[i];
			}
		}
		
		for(int i=0; i<arrsize; i++)
		{
			arr2[i] = arr[i]/(double)max*100;
			sum+=arr2[i];
		}
		
		System.out.println(sum/(double)arrsize);

	}

}
