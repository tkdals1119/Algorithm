#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	long num; cin >> num;
	int arr[100000] = { 0, };
	long index = 0;

	while (1)
	{
		index = num % 10;
		arr[index] = 1;
		
		if ((num/10) < 10)
		{
			arr[num / 10] = 1;
			break;
		}
		else num /= 10;
	}

	for (int i = 99999; i >= 0; i--)
	{
		if (arr[i] != 0) printf("%d", i);
	}
}