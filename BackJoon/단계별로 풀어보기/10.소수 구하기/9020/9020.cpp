// 백준 9020
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	int num, ans1, ans2;
	int arr[10001];

	for (int i = 0; i < 10001; i++)
	{
		if (i == 0 || i == 1) arr[i] = 0;
		else arr[i] = i;
	}

	for (int i = 2; i < sqrt(10001); i++)
	{
		for (int j = i + i; j < 10001; j += i)
		{
			arr[j] = 0;
		}
	}

	while (tc)
	{
		cin >> num;
		for (int i = 2; i <= num / 2; i++)
		{
			if (arr[i] != 0 && arr[num - i] != 0)
			{
				ans1 = arr[i];
				ans2 = arr[num - i];
			}
		}
		cout << ans1 << " " << ans2 << "\n";
		tc--;
	}
}