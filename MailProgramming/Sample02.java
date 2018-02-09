/*
2) 문장의 형식을 가진 문자열의 모든 단어를 거꾸로 하시오.
예) 'ABC 123' - 'CBA 321'
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
