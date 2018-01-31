#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 

bool cal(char ch[])
{
	int str = 0, i = 0, j = 0;
	bool chk[26] = { false };
	str = strlen(ch);

	if (str == 1) return true;

	for (i = 0; i < str - 1; i++)
	{
		if (ch[i] != ch[i + 1])
		{
			if (chk[ch[i + 1] - 'a'] == true) return false;
			chk[ch[i] - 'a'] = true;
		}
	}
	return true;
}

int main(int argc, char *argv[])
{
	char ch[100];
	int str = 0, num = 0, i = 0, count = 0;

	scanf("%d", &num);

	if (num > 100) printf("숫자 초과\n");
	else
	{
		for (i = 0; i < num; i++)
		{
			scanf("%s", ch);

			if (cal(ch)) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}