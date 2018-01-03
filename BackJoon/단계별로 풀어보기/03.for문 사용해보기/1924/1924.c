#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int month;
	int date;
	int i; 
	
	int *arr;
	int size=0;
	int sum=0;
	int result=0;
	int result_date=1;
	
	scanf("%d %d", &month, &date);
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		if(date<1 || date>31)
		{
			return;
		}
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		if(date<1 || date>30)
		{
			return;
		}
	}
	else if(month==2)
	{
		if(date<2 || date>28)
		{
			return;
		}
	}
	
	size = month-1;
	arr = (int*)malloc(sizeof(int)*size);
	
	for(i=1; i<month; i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
			arr[i-1] = 31;
		}
		else if(i==4 || i==6 || i==9 || i==11)
		{
			arr[i-1] = 30;
		}
		else if(i==2)
		{
			arr[i-1] = 28;
		}
	}
	
	
	for(i=0; i<size; i++)
	{
		sum+=arr[i];
	}	
	sum+=date-1;
	
	result = sum%7;
	
	switch(result)
	{
		case 0 : printf("MON");
		break;
		
		case 1 : printf("TUE");
		break;

		case 2 : printf("WED");
		break;

		case 3 : printf("THU");
		break;

		case 4 : printf("FRI");
		break;

		case 5 : printf("SAT");
		break;

		case 6 : printf("SUN");
		break;
	}
	
	
	return 0;
}
