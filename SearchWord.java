import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.*;

public class SearchWord {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try{
			File file = new File("file location");
			FileReader filereader = new FileReader(file);
			BufferedReader bufReader = new BufferedReader(filereader);
			String line = "";
			String past_name = "";
			String res = "";
			int line_count = 0;
			int count = 0;
			int index = 1;

			String name[] = {"name1", "name2", "name3", "name4"};
			int[] count_name = new int[4];
			Arrays.fill(count_name, 0);
			
			while((line=bufReader.readLine())!=null)
			{
				line_count++;
				if(line_count>4 && !line.isEmpty())
				{
					if(line.charAt(0)!='[') res = past_name;
					else
					{
						res="";
						index=1;
						while(line.charAt(index)!=']')
						{			
							res += line.charAt(index);			
							index++;
						}
					}

					if(line.contains("asdf"))
					{					
						count++;									
						for(int i=0; i<name.length; i++)
						{
							if(name[i].equals(res)) count_name[i]++;
						}
					}
					past_name = res;
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
