#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
	char cha[100];
	int i=0;
	int count = 0;

	scanf("%s", cha);

	while(1)
	{
		if (cha[i]!=NULL)
		{
			printf("%c", cha[i]);
			i++;

			if (i % 10 == 0)
			{
				printf("\n");
			}
		}
		else
		{
			break;
		}
		

		
	}
}