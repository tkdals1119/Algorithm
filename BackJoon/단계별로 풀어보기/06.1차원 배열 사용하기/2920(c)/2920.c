#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int num[8];
	int i = 0, count_asc = 0, count_des = 0;

	for (i = 0; i<8; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == i + 1) count_asc++;
		else if (num[i] == 8 - i) count_des++;
	}

	if (count_asc == 8) printf("ascending\n");
	else if (count_des == 8) printf("descending\n");
	else printf("mixed\n");


	return 0;
}
