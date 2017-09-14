#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=1;
	int y=1;
	int z=1;
	
	for(x=1; x<1000; x++)
	{
		for(y=1; y<1000; y++)
		{
			for(z=1; z<1000; z++)
			{
				if((x<y)&&(y<z))
				{
				   if(x+y+z==1000)
				   {
				   	 if(x*x + y*y == z*z)
				   	 {
				   	 	printf("%d", x*y*z);
						}
				   }
				   				
				}
			}
		}
	}
	
	return 0; 
}
