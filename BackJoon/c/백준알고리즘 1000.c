#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	if(A<=0 || B>=10)
	{
		return;
	}
	else
	{
		printf("%d", A+B);
	}
	return 0;
}
