#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0, j = 0, k, str = 0, num = 0, count = 0;
	char ch[20];

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d %s", &count, ch);
		str = strlen(ch);

		for (j = 0; j < str; j++)
		{
			for (k = 0; k < count; k++)
			{
				printf("%c", ch[j]);
			}
		}
		printf("\n");
	}
	return 0;
}