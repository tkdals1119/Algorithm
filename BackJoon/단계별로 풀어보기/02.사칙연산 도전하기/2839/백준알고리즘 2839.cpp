#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int count = 0;

	scanf("%d", &num);
	
	while (num!=0)
	{
		if (num < 0)
		{
			printf("-1\n");
			break;
		}

		if (num % 5 != 0)
		{
			num -= 3;
			count++;
		}
		else
		{
			count = count + (num / 5);
			num %= 5;
		}
	}

	if(num==0) printf("%d\n", count);
}