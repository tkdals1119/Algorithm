// 오일러 1번

//10보다 작은 자연수 중에서 3 또는 5의 배수는 3, 5, 6, 9 이고, 이것을 모두 더하면 23입니다.
//
//1000보다 작은 자연수 중에서 3 또는 5의 배수를 모두 더하면 얼마일까요?

#include <iostream>

int main(int argc, char** argv) {
	int i, result;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	
	
	for(i=1; i<1000; i++)
	{
		if(i % 3 == 0)
		{
			sum1+=i;
		}		
		
		if(i % 5 == 0)
		{
			sum2+=i;
		}
		
		if(i % 15 == 0)
		{
			sum3+=i;
		}
	
	}
	result = sum1 + sum2 - sum3;
	
	printf("%d\n", result);
	return 0;
}
