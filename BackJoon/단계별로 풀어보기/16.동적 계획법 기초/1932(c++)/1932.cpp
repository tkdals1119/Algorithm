// 백준 1932

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int num = 0;
	int res_max = 0;
	cin >> num;
	int arr[501][501] = { 0 };

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> arr[i][j];

			if (j == 1) arr[i][j] = arr[i - 1][j] + arr[i][j];
			else if (i == j) arr[i][j] = arr[i - 1][j - 1] + arr[i][j];
			else arr[i][j] = arr[i][j] + max(arr[i - 1][j - 1], arr[i - 1][j]);

			res_max = max(res_max, arr[i][j]);
		}
	}
	printf("%d\n", res_max);
	return 0;
}