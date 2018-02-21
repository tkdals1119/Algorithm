import java.util.*;

public class no1011 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num = 0, dist = 0, start = 0, end = 0;
		int arr[];
		Scanner sc = new Scanner(System.in);
		
		num = sc.nextInt();
		arr = new int[num];
		
		for(int i=0; i<num; i++)
		{
			start = sc.nextInt();
			end = sc.nextInt();
			
			dist = end - start;
			arr[i] = (int) cal(dist);
		}
		
		for(int i=0; i<num; i++)
		{
			System.out.println(arr[i]);
		}

	}

	private static long cal(int dist) {
		// TODO Auto-generated method stub
		
		long i = 1;
		
		while(true)
		{
			if (i*i >= dist)
			{
				if (dist >= ((i*i)-i+1) && dist <= i*i) return i*2-1;
				else if (dist >= (i*i+1) && dist <= i*i+i) return i*2;
				else return (i-1)*2;
			}
			else i++;
		}
	}
}
