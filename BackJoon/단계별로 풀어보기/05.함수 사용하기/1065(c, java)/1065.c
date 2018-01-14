#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cal(int i)
{
	if (i == 1000) return 0;
	else
	{
		int arr[2] = { 0 };
		arr[0] = ((i % 100) / 10) - (i / 100);
		arr[1] = ((i % 100) % 10) - ((i % 100) / 10);

		if (arr[0]==arr[1]) return 1;
		else return 0;
	}			
}

int main(int argc, char *argv[])
{
	int num = 0;
	int count = 0;

	scanf("%d", &num);

	if (num < 100) printf("%d\n", num);
	else if (num > 1000) printf("1~1000 사이의 숫자로 입력해주세요.\n");
	else
	{
		for (int i = 100; i <= num; i++)
		{
			if (cal(i) == 1) count++;
		}

		printf("%d\n", count+99);
	}
	return 0;
}

