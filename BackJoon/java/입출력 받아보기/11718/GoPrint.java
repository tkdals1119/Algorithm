import java.util.*;

public class GoPrint{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str;
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNextLine())
		{
			str = sc.nextLine();
			
			if(!(str.isEmpty() || str.length()>100))
			{
				System.out.println(str);
			}
		}
	}
}
