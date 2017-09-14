// 오일러 3번 

// 어떤 수를 소수의 곱으로만 나타내는 것을 소인수분해라 하고, 이 소수들을 그 수의 소인수라고 합니다.
// 예를 들면 13195의 소인수는 5, 7, 13, 29 입니다.
// 600851475143의 소인수 중에서 가장 큰 수를 구하세요. 

#include <iostream>

long long factorization()
{
	long long n, i;
	long long j = 0;
	long long count = 0;
	long long num = 0;
	long long arr[100];
	
	scanf("%lld", &n);
	printf("입력한 숫자들의 소인수들은 : ");
	
	for(i=2; i<=n; i++)
	{
		if(n % i == 0)
		{
			n /= i;

			arr[j] = i;
			j++;
			count++;
			
			printf(" %lld ", i);
			i = 1;
		}
	}

	for(i=0; i<count; i++)
	{
		if(num < arr[i])
		{
			num = arr[i];
		}
	}
	printf("\n"); 
	printf("소인수 중 가장 큰 수는 : %lld", num);
}

int main(int argc, char** argv) {
	factorization();
	return 0;
}
