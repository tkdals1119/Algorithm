#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int arr[5] = { 0 };
	int i = 0;
	int sum = 0; 
	
	for (i = 0; i<5; i++) 
	{
		scanf("%d", &arr[i]);
		if (arr[i]<40) { arr[i] = 40; } sum += arr[i];
	}
	printf("%d", sum / 5);

	return 0;
}
