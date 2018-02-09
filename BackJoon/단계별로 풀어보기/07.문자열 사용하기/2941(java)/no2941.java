import java.util.*;
public class no2941 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String alpha[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
		String str;
		int count = 0;
		int sum = 0;
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();
		
		for(int i=0; i<alpha.length; i++)
		{
			if(str.contains(alpha[i])) 
			{
				count++;
				sum+=alpha[i].length();
			}
		}
		
		System.out.println(count+(str.length()-sum));
	}
}
