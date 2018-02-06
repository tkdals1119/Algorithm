#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int arr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char ch[16];
	int count = 0, i = 0, str = 0;

	scanf("%s", ch);
	str = strlen(ch);

	for (i = 0; i < str; i++)
	{
		count += arr[ch[i] - 'A'];
	}
	
	printf("%d\n", count);
	
	return 0;
}
