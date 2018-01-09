#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *arr;
	double *arr2;
	int arrsize, i;
	int temp = 0;
	double sum = 0;

	scanf("%d", &arrsize);
	if (arrsize > 1000)
	{
		printf("숫자오류\n");
		return 0;
	}

	arr = (int*)malloc(sizeof(int)*arrsize);
	arr2 = (double*)malloc(sizeof(double)*arrsize);


	for (i = 0; i < arrsize; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] >= temp)
		{
			temp = arr[i];
		}
	}

	for (i = 0; i < arrsize; i++)
	{
		arr2[i] = (double)arr[i] / (double)temp * 100;

		sum += arr2[i];
	}

	printf("%.2f\n", sum/(double)arrsize);
	return 0;
}