#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char ch[1000000];
	char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int basic[26] = { 0 };
	char max_char;
	int str = 0, i = 0, j = 0, max = 0, max_index = 0;

	scanf("%s", ch);
	str = strlen(ch);

	for (i = 0; i < str; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z') ch[i] += 32;
		
		for (j = 0; j < 26; j++)
		{
			if (ch[i] == alpha[j]) basic[j]++;	
		}		
	}

	for (i = 0; i < 26; i++)
	{
		if (basic[i] >= max)
		{
			max = basic[i];
			max_char = alpha[i];
			max_index = i;
		}

		if (i == 25)
		{
			for (j = 0; j < 26; j++)
			{
				if (j != max_index && basic[j] == basic[max_index])
				{
					max_char = '?';
					break;
				}
			}
		}
	}
 
	if (max_char >= 'a' && max_char <= 'z') max_char -= 32;
	
	printf("%c\n", max_char);

	return 0;
}
