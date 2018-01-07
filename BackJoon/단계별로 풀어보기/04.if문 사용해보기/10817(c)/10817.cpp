#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[3] = { 0, }, i, j, tmp;


	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	printf("%d", arr[1]);
}