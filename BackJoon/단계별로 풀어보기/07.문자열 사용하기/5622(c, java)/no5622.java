import java.util.*;
public class no5622 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
		String str;
		int count=0;
		
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();
		
		for(int i=0; i<str.length(); i++)
		{
			count+=arr[str.charAt(i)-'A'];
		}
		
		System.out.println(count);
	}
}
