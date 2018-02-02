import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.*;

import javax.swing.plaf.synth.SynthSeparatorUI;
public class SearchWord {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try{
			File file = new File("C:\\Users\\SAMSUNG\\Desktop\\sm\\KakaoTalk_20180202_2216_57_878_group.txt");
			FileReader filereader = new FileReader(file);
			BufferedReader bufReader = new BufferedReader(filereader);
			String line = "";
			String res = "";
			int count = 0;
			String name[] = {"name1", "name2", "name3", "name4", "name5", "name6", "name7", "name8", "name9", "name10", "name11", "name12", "name13"};
			int[] count_name = new int[13];
			Arrays.fill(count_name, 0);
			
			while((line=bufReader.readLine())!=null)
			{
				if(line.matches(".*word.*"))
				{
					for(int i=1; i<4; i++)
					{					
						if(line.charAt(i)==']') 
						{
							for(int j=0; j<count_name.length; j++)
							{
								if(res.equals(name[j])) count_name[j]++; 
							}
							count++;
							res="";						
						   	break;
						}
						else res += line.charAt(i);
						
						if(i==3)
						{
							for(int j=0; j<count_name.length; j++)
							{
								if(res.equals(name[j])) count_name[j]++; 
							}
							count++;
							res="";
						}
					}
				}
			}
			System.out.println("ÃÑ È½¼ö: " + count);
			for(int i=0; i<count_name.length; i++)
			{
				System.out.println(name[i]+": "+count_name[i]+"¹ø");
			}
			bufReader.close();
		}catch (FileNotFoundException e){
		}catch (IOException e){
			System.out.println(e);
		}
	}

}
