// 백준 15552

#include <iostream>
#include <cstdio> 
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	int num1 = 0, num2 = 0;

	for (int i = 0; i < tc; i++)
	{
		cin >> num1 >> num2;
		cout << num1 + num2 << "\n";
	}
	return 0;
}