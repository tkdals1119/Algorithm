// 백준 10989

#include <iostream>
#include <cstdio> 
#include <algorithm>

using namespace std;

int main()
{
	int arr[10001] = { 0, };
	int tc; cin >> tc;
	int num = 0;

	for (int i = 0; i < tc; i++)
	{
		cin >> num;
		arr[num]++;
	}
	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] > 0)
		{
			for(int j=0; j<arr[i]; j++)
			printf("%d\n", i);;
		}
	}
	return 0;
}