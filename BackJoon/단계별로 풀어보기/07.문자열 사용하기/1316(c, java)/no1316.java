import java.util.*;
public class no1316 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i=0, j=0, num=0;
		String str;
		
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int res = num;
		
		for(i=0; i<num; i++)
		{
			str = sc.next();
			boolean chk[] = new boolean[26];
			Arrays.fill(chk, false);
			
			for(j=0; j<str.length()-1; j++)
			{
				if(str.charAt(j)!=str.charAt(j+1))
				{
					if(chk[str.charAt(j+1)-'a']==true) 
					{
						res--;
						break;
					}
					chk[str.charAt(j)-'a'] = true;
				}
			}
		}
		System.out.println(res);
	}
}
