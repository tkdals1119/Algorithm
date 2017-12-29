#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int c_zero=0;
static int c_one=0;
	
int fibonacci(int n) {
	
    if (n==0) 
	{
        c_zero++;
    } 
	else if (n==1) 
	{
        c_one++;
    }
	else 
	{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main(int argc, char *argv[]) {
	
	int test;
	int *arr;
	
	
	int i;
	
	scanf("%d", &test);
	
	arr = (int*)malloc(sizeof(int)*test);
	
	
	for(i=0; i<test; i++)
	{		
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<test; i++)
	{
		fibonacci(arr[i]);
		printf("%d %d\n", c_zero, c_one);
		
		c_zero=0;
		c_one=0;	
	}

	
	return 0;
}
