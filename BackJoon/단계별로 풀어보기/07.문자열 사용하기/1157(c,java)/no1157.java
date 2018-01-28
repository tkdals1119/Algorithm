import java.util.*;

public class no1175 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str;
		int arr[] = new int[26];
		int max = 0, max_num = 0;
		boolean flag = false;
		
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();
		str = str.toLowerCase();	
		char ch[] = str.toCharArray();
		
		if(ch.length>1000000) System.out.println("숫자 초과");
		
		else
		{
			for(int i=0; i<ch.length; i++)
			{
				arr[ch[i]-97]++;
			}
			
			for(int i=0; i<arr.length; i++)
			{
				if(arr[i]>max) 
				{
					max=arr[i]; 
					max_num=i;	
				}
				
				if(i==arr.length-1)
				{
					for(int j=0; j<arr.length; j++)
					{
						if(max_num!=j && arr[j]==max) flag=true;
					}
				}
			}
						
			if(flag) System.out.println("?");
			else System.out.println((char)(max_num+65));
		}
	}
}
