/*
2) ������ ������ ���� ���ڿ��� ��� �ܾ �Ųٷ� �Ͻÿ�.
��) 'ABC 123' - 'CBA 321'
*/

import java.util.*;
public class Sample02 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str;
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();

		for(int i=str.length()-1; i>=0; i--)
		{
			System.out.print(str.charAt(i));
		}
	}

}
