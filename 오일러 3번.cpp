// ���Ϸ� 3�� 

// � ���� �Ҽ��� �����θ� ��Ÿ���� ���� ���μ����ض� �ϰ�, �� �Ҽ����� �� ���� ���μ���� �մϴ�.
// ���� ��� 13195�� ���μ��� 5, 7, 13, 29 �Դϴ�.
// 600851475143�� ���μ� �߿��� ���� ū ���� ���ϼ���. 

#include <iostream>

long long factorization()
{
	long long n, i;
	long long j = 0;
	long long count = 0;
	long long num = 0;
	long long arr[100];
	
	scanf("%lld", &n);
	printf("�Է��� ���ڵ��� ���μ����� : ");
	
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
	printf("���μ� �� ���� ū ���� : %lld", num);
}

int main(int argc, char** argv) {
	factorization();
	return 0;
}
