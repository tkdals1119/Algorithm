// 백준 1978
#include <iostream>
using namespace std;

int cal(int n);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	int num = 0; int count = 0;

	for (int i = 0; i < tc; i++)
	{
		cin >> num;
		if (cal(num) && num!=1) count++;
	}
	cout << count << "\n";
}

int cal(int n)
{
	for (int i = 2; i < n; i++) if (n%i == 0) return 0;
	return 1;
}


