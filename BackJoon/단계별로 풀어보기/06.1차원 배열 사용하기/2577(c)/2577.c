#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int num, i, j, str;
	int res = 1;
	char ch[1000000];
	int arr[10] = { 0 };

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &num);
		res *= num;
	}

	sprintf(ch, "%d", res);

	str = strlen(ch);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < str; j++)
		{
			if (ch[j]-'0' == i)
			{
				arr[i]++;
			}
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

