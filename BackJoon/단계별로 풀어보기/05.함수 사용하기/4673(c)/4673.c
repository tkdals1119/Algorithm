#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int res[10001] = { 0 };

int cal(int i)
{
	int num = i;

	if (i >= 10000) { num += i / 10000; i %= 10000; }
	if (i >= 1000) { num += i / 1000; i %= 1000; }
	if (i >= 100) { num += i / 100; i %= 100; }
	if (i >= 10) { num += i / 10; i %= 10; }

	return num += i;
}

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= 10000; i++)
	{
		res[cal(i)] = 1;

		if (res[i]!=1) printf("%d\n", i);
	}
	return 0;
}