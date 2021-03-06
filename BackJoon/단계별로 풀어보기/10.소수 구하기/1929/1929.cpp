// 백준 1929
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int *arr;
	int m; int n;
	cin >> m >> n;
	arr = new int[n];
	arr[0] = 0; arr[1] = 0;

	for (int i = 2; i <= n; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		for (int j = i + i; j <= n; j += i)
		{
			arr[j] = 0;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (arr[i] == 0) continue;
		cout << arr[i] << "\n";
	}
}