#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void eratos(int n)
{
	bool PrimeArray[n+1];
	int i;
	int j;
	long long sum = 0;
	
	if(n<=1) return;
	
	for(i=2; i<=n; i++)
	{
		PrimeArray[i] = true;
	}
	
	for(i=2; (i*i)<=n; i++)
	{
		if(PrimeArray[i])
		{
			for(j=(i*i); j<=n; j+=i)
			{
				PrimeArray[j]=false;
			}
		}
	}
	
	for(i=2; i<=n; i++)
	{
		if(PrimeArray[i]==true)
		{
			sum+=i;
		}
	}
	
	printf("%lld\n", sum);
}

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("범위를 입력하세요\n");
	scanf("%d", &num);
	
	eratos(num);
	return 0;
}
