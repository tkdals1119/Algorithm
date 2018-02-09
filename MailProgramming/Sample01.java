/*
1) 정수로 된 배열이 주어지면, 각 원소가 자신을 뺀 나머지 원소들의 곱셈이 되게 하시오. 단, 나누기 사용 금지, O(n) 시간 복잡도.
예) [1, 2, 3, 4, 5] - [120, 60, 40, 30, 24]
  */

import java.util.*;
public class Sample01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[];
		int arr_size;
		int num;
		int all_cal = 1;
		
		Scanner sc = new Scanner(System.in);
		arr_size = sc.nextInt();
		arr = new int[arr_size];
		
		for(int i=0; i<arr_size; i++)
		{
			arr[i] = sc.nextInt();
			all_cal *= arr[i];
		}
		
		for(int i=0; i<arr_size; i++)
		{
			arr[i] = all_cal/arr[i];
		}
		
		for(int i=0; i<arr_size; i++)
		{
			System.out.print(arr[i]+" ");
		}

	}

}
