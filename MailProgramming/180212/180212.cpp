// 매일프로그래밍 180212

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int cal(int arr[])
{
	int i = 0, current_sum = arr[0], max_sum = arr[0], arr_size = 0;
	arr_size = _msize((void*)arr) / sizeof(int);

	for (i = 1; i < arr_size; i++)
	{
		current_sum = max(current_sum + arr[i], arr[i]);
		max_sum = max(current_sum, max_sum);
	}
	return max_sum;
}

int main()
{
	int *arr;
	int arr_size = 0, i = 0;

	cin >> arr_size;
	arr = new int[arr_size];

	for (i = 0; i < arr_size; i++)
	{
		cin >> arr[i];
	}

	printf("%d\n", cal(arr));

	delete[]arr;
	return 0;
}

