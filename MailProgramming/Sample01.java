/*
1) ������ �� �迭�� �־�����, �� ���Ұ� �ڽ��� �� ������ ���ҵ��� ������ �ǰ� �Ͻÿ�. ��, ������ ��� ����, O(n) �ð� ���⵵.
��) [1, 2, 3, 4, 5] - [120, 60, 40, 30, 24]
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
