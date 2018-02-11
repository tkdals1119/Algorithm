import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class no2941 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String alpha[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
		String str;
		String chk="";
		int count = 0;
		int sum = 0;
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();
			
		for(int i=0; i<alpha.length; i++)
		{
			Pattern pattern = Pattern.compile(alpha[i]);
			Matcher matcher = pattern.matcher(str);
			while(matcher.find()) 
			{
				count++;
				str = str.replaceFirst(alpha[i], "1");
			}
		}
		
		str = str.replaceAll("1", "");
		System.out.println(count+str.length());

	}
}
