// 백준 2750

#include <iostream>
#include <cstdio> 
#include <algorithm>

using namespace std;

int main()
{
	int tc; cin >> tc;
	int *arr = new int[tc];
	int max = 0;
	for (int i = 0; i < tc; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + tc);
	for (int i = 0; i < tc; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}