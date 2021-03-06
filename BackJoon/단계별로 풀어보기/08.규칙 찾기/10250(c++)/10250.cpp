// 백준 10250

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int cal(int h, int w, int want)
{
	int count = 0, i, size = 0, first_room = 101;
	size = h * w;
	int *arr;
	arr = new int[size];

	if (h == 1)
	{
		arr[0] = 101;
		for (i = 1; i < size; i++)
		{
			arr[i] = arr[i - 1] + 1;
		}
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (i == 0)
			{
				arr[0] = first_room;
				count++;
			}
			else
			{
				arr[i] = first_room + 100;
				first_room = arr[i];
				count++;
				if (count == h)
				{
					first_room -= h * 100 - 1;
					count = 0;
				}
			}
		}
	}	
	return arr[want - 1];
}

int main()
{
	int num = 0, i = 0, h = 0, w = 0, want = 0;
	int *arr;
	cin >> num;
	arr = new int[num];

	for (i = 0; i < num; i++)
	{
		cin >> h >> w >> want;
		arr[i] = cal(h, w, want);
	}

	for (i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

