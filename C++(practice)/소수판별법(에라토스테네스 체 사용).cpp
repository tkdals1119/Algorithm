// 에라토스테네스 체를 이용한 소수 판별법
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int *arr;
	int num; cin >> num;
	arr = new int[num];

	for (int i = 2; i < num; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i < sqrt(num); i++)
	{
		if (arr[i] == 0) continue;
		for (int j = i + i; j < num; j += i)
		{
			arr[j] = 0;
		}
	}

	for (int i = 2; i < num; i++)
	{
		if (arr[i] != 0) cout << arr[i] << "\n";
	}
}


