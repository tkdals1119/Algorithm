// 백준 2108
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int f_num; cin >> f_num;
	int s_num; cin >> s_num;
	int arr[10001] = { 0, };
	int sum = 0;
	int flag = 0;
	int min = 0;

	for (int i = 2; i <= 10000; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i <= sqrt(10000); i++)
	{
		for (int j = i + i; j <= 10000; j += i)
		{
			arr[j] = 0;
		}
	}

	for (int i = f_num; i <= s_num; i++)
	{
		if (arr[i] == 0) continue;
		sum += arr[i];
		flag++;
		if (flag == 1) min = arr[i];
	}
	if (flag == 0) cout << "-1" << "\n";
	else
	{
		cout << sum << "\n";
		cout << min << "\n";
	}
}