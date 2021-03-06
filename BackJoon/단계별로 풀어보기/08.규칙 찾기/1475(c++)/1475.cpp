// 백준 1475

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int num[10] = { 0 };
	int res = 0, res_six = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str.at(i) - '0' == 9) num[6]++;
		else num[str.at(i) - '0']++;
	}

	if (num[6] % 2 == 0) res_six = num[6] / 2;
	else res_six = num[6] / 2 + 1;

	for (int j = 0; j < 10; j++)
	{
		if (j != 6) res = max(res, num[j]);
	}

	printf("%d\n", max(res, res_six));
	return 0;
}