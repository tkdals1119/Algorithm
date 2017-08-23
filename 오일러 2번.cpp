// 오일러 2번

//피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.
//
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까? 

#include <iostream>

int fibo(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else if(num == 1)
	{
		return 1;
	}
	else if(num == 2)
	{
		return 2;
	}
	else
	{
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main(int argc, char** argv) {
	     int i = 1;
	    int sum = 0;

        while(true)
        {
        	i++;
        	if(fibo(i) % 2 == 0)
        	{
        		sum+=fibo(i);
			}
			else if(fibo(i) >= 4000000)
			{
				printf("짝수인 수의 모든 합은 %d ", sum);
				break; 
			}
		}
	return 0;
}
