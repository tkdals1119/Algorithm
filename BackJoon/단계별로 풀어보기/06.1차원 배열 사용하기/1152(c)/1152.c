#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	char arr[1000000];
	int i;
	int count = 0;
	int str = 0;
	

	scanf("%[^\n]", arr);
	str = strlen(arr);


	for (i = 0; i < str; i++)
	{
		if (arr[i] == ' ')
		{
			count++;
		}
	}

	if (arr[0] == ' ') count--;
	if (arr[str - 1] == ' ') count--;

	printf("%d\n", count+1);

	return 0;
}

