// 백준 2775

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int cal(int floor, int room)
{
	int apt[15][15] = { 0 };
	int i=0, j=0;

	for (i = 1; i < 15; i++)
	{
		apt[0][i] = i;
	}

	for (i = 1; i < 15; i++)
	{ 
		apt[i][1] = 1;
		for (j = 2; j < 15; j++)
		{
			apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
		}
	}

	return apt[floor][room];
}

int main()
{
	int num=0, i=0, floor=0, room=0;
	int *arr;

	cin >> num;
	arr = new int[num];

	for (i = 0; i < num; i++)
	{
		cin >> floor;
		cin >> room;

		arr[i] = cal(floor, room);
	}

	for (i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

