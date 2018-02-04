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
			File file = new File("C:\\Users\\SAMSUNG\\Desktop\\sm\\test.txt");
			FileReader filereader = new FileReader(file);
			BufferedReader bufReader = new BufferedReader(filereader);
			String line = "";
			String res = "";
			int count = 0;
			int index = 1;
			String name[] = {"name1", "name2", "name3", "name4", "name5"};
			int[] count_name = new int[5];
			Arrays.fill(count_name, 0);
			
			while((line=bufReader.readLine())!=null)
			{
				if(line.matches(".*word.*"))
				{
					count++;
					while(line.charAt(index)!=']')
					{					
						res += line.charAt(index);
						index++;
					}					
					for(int i=0; i<name.length; i++)
					{
						if(name[i].equals(res)) count_name[i]++;
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
