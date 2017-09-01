
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = fopen("a.txt", "r"); 
    char c;
    int read[1000];
    int cal[996];
    int num;
    int i = 0;
    int j = 0;
    int k = 0;
    int max = 0;

    if(fp == NULL) 
    { 
        printf("file open error ! \n"); 
        return 0; 
    } 

    while((c = fgetc(fp)) != EOF) 
    { 

        printf("%c", c);		       
        int num = c-'0';
      
        read[i] = num;
		i++;		
    } 
    
    for(j=0; j<1000; j++)
    {
    	cal[j] = read[j]*read[j+1]*read[j+2]*read[j+3]*read[j+4];
    	if(j+4 == 999)
    	{
    		break;
		}
	}
    
    for(k=0; k<996; k++)
    {  	
    	if(cal[k]>max)
    	{
    		max = cal[k];
		}
	}
	
	printf("\n");
	printf("------------\n");
	printf("가장 큰 수는 %d 입니다.\n", max);

	return 0;
}
