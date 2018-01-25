#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char ch[1000000];
	char max_char;
	int str = 0, i = 0, j = 0, max = 0, count=1;

	scanf("%s", ch);
	str = strlen(ch);

	for (i = 0; i < str; i++)
	{	
		if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			ch[i] += 32;
		}
	}

	for (i = 0; i < str; i++)
	{
		count = 1;
		for (j = 0; j < str; j++)
		{
			if (ch[i] == ch[j] && i!=j)
			{
				count++;
				ch[j] = ' ';
			}
		}

		if (max < count)
		{
			max = count;
			max_char = ch[i];
		}
		else if (max == count && max_char != ch[i])
		{
			max_char = '?';
		}
	}

	printf("%c\n", max_char);

	return 0;
}