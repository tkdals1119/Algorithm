// 매일프로그래밍 180430
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	int tc; cin >> tc;
	int *input; int *arr2; int *arr3; int *res;
	input = new int[tc]; arr2 = new int[tc]; arr3 = new int[tc]; res = new int[tc];
	int cal = 1;

	for (int i = 0; i < tc; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < tc; i++)
	{
		arr2[i] = cal;
		cal *= input[i];
	}

	cal = 1;
	for (int i = tc-1; i >= 0; i--)
	{
		arr3[i] = cal;
		cal *= input[i];
	}

	for (int i = 0; i < tc; i++)
	{
		res[i] = arr2[i] * arr3[i];
	}

	for (int i = 0; i < tc; i++)
	{
		cout << res[i] << " ";
	}
}