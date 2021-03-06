// 백준 1011

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

long long cal(int dist)
{
	long long i = 1;

	while (1)
	{
		if (i*i >= dist)
		{
			if (dist >= ((i*i)-i+1) && dist <= i*i) return i*2-1;
			else if (dist >= i*i+1 && dist <= i*i+i) return i*2;
			else return (i-1)*2;
		}
		else i++;
	}
}

int main()
{
	int num=0, i=0, start=0, end=0, dist=0;
	int *arr;
	cin >> num;

	arr = new int[num];
	for (i = 0; i < num; i++)
	{
		cin >> start >> end;
		dist = end - start;
		arr[i] = cal(dist);
	}

	for (i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

