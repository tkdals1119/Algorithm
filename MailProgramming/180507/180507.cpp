// 매일프로그래밍 180507
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	int *arr;
	arr = new int[tc];

	for (int i = 0; i < tc; i++)
	{
		cin >> arr[i];
	}

	int num; cin >> num;
	sort(arr, arr + tc, greater<int>());
	cout << arr[num - 1] << "\n";
}