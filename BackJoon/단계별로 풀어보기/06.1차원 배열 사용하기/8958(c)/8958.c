#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, num;
	char ch[80];
	int *arr;

	scanf("%d", &num);

	arr = (int*)malloc(sizeof(int)*num);
	for (i = 0; i < num; i++)
	{
		scanf("%s", ch);
		arr[i] = cal(ch);
	}

	for (i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int cal(char ch[])
{
	int i, check, str = 0;
	int sum = 0;
	int count = 0;
	str = strlen(ch);

		for (i = 0; i < str; i++)
		{
			if (ch[i] == 'O')  check = 1;
			else check = 0;

			if (check == 1) count++;
			else count = 0;

			sum += count;
		}
	
	
	return sum;
}
