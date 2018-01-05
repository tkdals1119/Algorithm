#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int score;
	
	scanf("%d", &score);	
	
	if(score<0 || score>100)
	{
		return;
	}
	else
	{
		if(score>=90 && score<=100)
		{
			printf("A");
		}
		else if(score>=80 && score<=89)
		{
			printf("B");
		}
		else if(score>=70 && score<=79)
		{
			printf("C");
		}
		else if(score>=60 && score<=69)
		{
			printf("D");
		}
		else
		{
			printf("F");
		}
}
	return 0;
}
