// 180214
// 백준_1193

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int i = 0, num = 0, chk = 0, head = 0, body = 0, remember = 0;
	int count = 1;
	int arr_size = 0;
	int arr[100000];
	arr[0] = 1;

	arr_size = sizeof(arr) / sizeof(int);

	cin >> num;

	for (i = 1; i < arr_size; i++)
	{
		arr[i] = arr[i - 1] + count;
		count++;
	}

	for (i = 0; i < arr_size; i++)
	{
		if (num < arr[i])
		{
			chk = num - arr[i - 1];
			remember = i-1;
			break;
		}
	}

	if ((remember+1) % 2 == 0)
	{
		head = 1 + chk;
		body = (remember + 1) - chk;
	}
	else
	{
		head = (remember + 1) - chk;
		body = 1 + chk;
	}

	printf("%d/%d\n", head, body);
	return 0;
}

