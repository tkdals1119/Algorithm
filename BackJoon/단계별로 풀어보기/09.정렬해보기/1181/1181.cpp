#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <functional>
#include <cstring>

using namespace std;

int main()
{
	char arr[100] = { 0, };
	cin >> arr;

	sort(arr, arr + strlen(arr), greater<int>());
	for (int i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}