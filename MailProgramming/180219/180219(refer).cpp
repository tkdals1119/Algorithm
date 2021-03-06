// 180219
// 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다. 정수 N이 주어지면, N보다 작은 모든 짝수의 피보나치 수의 합을 구하여라.

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int cal(int num)
{
	int sum = 0, z = 0;
	int x = 1;
	int y = 2;

	while (1)
	{
		z = x + y;
		if (z >= num) break;

		if (z % 2 == 0)
		{
			sum += z;
		}
		x = y;
		y = z;
	}
	return sum+2;
}

int main()
{
	int num;
	cin >> num;

	printf("%d\n", cal(num));

	return 0;
}

