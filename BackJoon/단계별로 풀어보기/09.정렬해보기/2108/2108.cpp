// 백준 2108
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int *arr;
	int tc; cin >> tc;
	arr = new int[tc];
	double sum = 0;
	int max = 0;
	int flag = 0;
	int ans = 0;
	
	int chk[8000] = { 0, };

	cout.precision(0);
	cout << fixed;

	for (int i = 0; i < tc; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	double d_tc = tc;
	cout << sum / d_tc << "\n";

	sort(arr, arr + tc);
	cout << arr[tc / 2] << "\n";

	for (int i = 0; i < tc; i++)
	{
		chk[arr[i]+4000]++;
	}

	for (int i = 0; i < 8000; i++)
	{
		if (chk[i] == 0) continue;

		if (chk[i] > max)
		{
			flag = 0;
			max = chk[i];
			ans = i;
		}
		else if (chk[i] == max)
		{
			flag++;
			if (flag == 1) ans = i;
		}
	}
	cout << ans-4000 << "\n";
	cout << arr[tc - 1] - arr[0] << "\n";
}