#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double A;
	double B;
	
	scanf("%lf %lf", &A, &B);
	
	if(A<=0 || B>=10)
	{
		return;
	}

	
	double num3 = A/B;
	
	printf("%.9lf", num3);
	return 0;
}
