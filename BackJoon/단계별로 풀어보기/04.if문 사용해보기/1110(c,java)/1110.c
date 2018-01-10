#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num, savenum, first, second;
	int count = 0;

	scanf("%d", &num);

	savenum = num;

	while (1)
	{
		first = num % 10;
		second = ((num / 10) + (num % 10)) % 10;
		num = first * 10 + second;
		count++;

		if (num == savenum)
		{
			printf("%d\n", count);
			break;
		}

	}

	return 0;
}