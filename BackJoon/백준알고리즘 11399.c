#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int people;
	int *arr;
	int i, j;
	int temp;
	int sum=0;

	scanf("%d", &people);
	
	if(people<1 || people>1000)
	{
		return;
	}
	else
	{
		arr = (int*)malloc(sizeof(int)*people);
		
		for(i=0; i<people; i++)
		{
			scanf("%d", &arr[i]);
			
			if(arr[i]<1 || arr[i]>1000)
			{
				return;
			}
		}
		
		for(i=0; i<people; i++)
		{
			for(j=i+1; j<people; j++)
			{
				if(arr[i]>arr[j])
			    {
				    temp = arr[i];
				    arr[i] = arr[j];
				    arr[j] = temp;
		        }
			}
			
		}

		for(i=0; i<people; i++)
		{
			for(j=0; j<=i; j++)
			{
				sum+=arr[j];
			}
		}
		
	}
	
	printf("%d", sum);
	
	return 0;
}
