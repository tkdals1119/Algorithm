// 백준 4948 (에라토스테네스 체 사용)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int arr[246913];
	int num;
	int count = 0;

	for (int i = 2; i < 246913; i++)
	{
		arr[i] = i;
	}

	while (1)
	{
		count = 0;
		cin >> num;
		if (num == 0) return 0;
		else
		{
			for (int i = 2; i < sqrt(2 * num); i++)
			{
				if (arr[i] == 0) continue;
				for (int j = i+i; j <= 2 * num; j += i)
				{
					arr[j] = 0;
				}
			}
		}

		for (int i = num+1; i <= 2 * num; i++)
		{
			if (arr[i] != 0) count++;
		}
		cout << count << "\n";
	}	
}


