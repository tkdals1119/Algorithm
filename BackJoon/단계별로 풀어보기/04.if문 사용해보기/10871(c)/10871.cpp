#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *arr;
	int num, sizearr, i, arrnum;

	scanf("%d %d", &sizearr, &num);
	arr = (int*)malloc(sizeof(int)*sizearr);

	for (i = 0; i < sizearr; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < sizearr; i++)
	{
		if (arr[i] < num)
		{
			printf("%d ", arr[i]);
		}
	}
	
}