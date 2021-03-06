// 백준 1003

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

static int zero = 0;
static int one = 0;

int fibo(int num)
{
	if (num == 0) zero++;
	else if (num == 1) one++;
	else return fibo(num - 1) + fibo(num - 2);
}
int main()
{
	int case_num = 0, num = 0, i = 0;
	int *arr;
	cin >> case_num;
	arr = new int[case_num];

	for (i = 0; i < case_num; i++)
	{
		cin >> num;

		fibo(num);
		printf("%d %d\n", zero, one);
		zero = 0;
		one = 0;
	}
	return 0;
}