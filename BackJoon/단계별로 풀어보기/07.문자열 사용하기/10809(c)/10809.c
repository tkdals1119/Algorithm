#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char input[100];
	int check[26];
	int str = 0, i = 0, j = 0;

	for (i = 0; i < 26; i++)
	{
		check[i] = -1;
	}

	scanf("%s", input);
	str = strlen(input);

	for (i = 0; i < str; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (input[i] == alpha[j])
			{
				if (check[j] == -1) check[j] = i;
			}
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d ", check[i]);
	}
}
