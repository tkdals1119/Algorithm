// 180219
// 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다. 정수 N이 주어지면, N보다 작은 모든 짝수의 피보나치 수의 합을 구하여라.

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int cal(int arr[])
{
	int i = 0, sum = 0;
	int num = 3;
	int arr_size = _msize((void*)arr) / sizeof(int);

	for (num = 3; num < arr_size; num++)
	{			
		if ((arr[num - 1] + arr[num - 2]) >= arr_size) break;
		else
		{
			arr[num] = arr[num - 1] + arr[num - 2];
		}
	}

	for (i = 0; i < arr_size; i++)
	{
		if (arr[i] % 2 == 0) sum += arr[i];
	}
	return sum;
}

int main()
{
	int num;
	cin >> num;

	int *arr = new int[num];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	printf("%d\n", cal(arr));

	return 0;
}

