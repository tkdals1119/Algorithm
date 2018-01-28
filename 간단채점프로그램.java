import java.util.*;
public class CheckAnswer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str;
		int count=0, res=0;
		char answer[] = {'2','5','4','9','4','2','3','3','5','1'};
		char wrong[] = new char[10];
		Arrays.fill(wrong, '0');
		
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();
		char write[] = str.toCharArray();
		
		for(int i=0; i<write.length; i++)
		{
			if(write[i]!=answer[i]) wrong[i]='1';
		}
		System.out.print("틀린 문항은 ");
		
		for(int i=0; i<wrong.length; i++)
		{
			if(wrong[i]!='0') 
			{
				System.out.print(i+1+"번, ");
				count++;
			}
		}
		
		if(count==0) System.out.println("없습니다.");
		else System.out.print("\n");
		
		res = 100-count*10;
		System.out.println("점수는 "+res+"점 입니다.");
	}

}
