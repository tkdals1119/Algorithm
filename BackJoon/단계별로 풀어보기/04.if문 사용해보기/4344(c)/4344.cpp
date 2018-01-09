#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num, arrsize, i, j, k, count;
	int sum = 0;
	int score[1000];
	double avg;
	double arrcount[1000];

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		count = 0;
		sum = 0;

		scanf("%d", &arrsize);

		for (j = 0; j < arrsize; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / (double)arrsize;

		for (k = 0; k < arrsize; k++)
		{
			if (score[k] > avg)
			{
				count++;
			}
		}
		arrcount[i] = (double)count / (double)arrsize * 100;
	}

	for (i = 0; i < num; i++)
	{
		printf("%.3f%%\n", arrcount[i]);
	}

	return 0;
}