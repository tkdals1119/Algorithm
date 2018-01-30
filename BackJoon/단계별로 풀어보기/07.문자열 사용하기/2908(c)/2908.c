#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	char ch1[5];
	char ch2[5];

	int num1 = 0, num2 = 0;

	scanf("%s %s", ch1, ch2);

	num1 = ((ch1[2] - '0') * 100) + ((ch1[1] - '0') * 10) + ((ch1[0] - '0') * 1);
	num2 = ((ch2[2] - '0') * 100) + ((ch2[1] - '0') * 10) + ((ch2[0] - '0') * 1);

	if (num1 > num2) printf("%d\n", num1);
	else if(num1 == num2) printf("두 수는 같지 않아야 한다.\n");
	else printf("%d\n", num2);

	return 0;
}
