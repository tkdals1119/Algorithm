// 백준 1847
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> st;
	int *arr;
	int tc; cin >> tc;
	arr = new int[tc+1];
	int index = 1;
	int num = 1;
	string str;

	for (int i = 1; i <= tc; i++)
	{
		cin >> arr[i];
	}

	while (index<tc+1)
	{
		if (num > tc + 1)
		{
			cout << "NO" << "\n";
			return 0;
		}
		if (st.empty() || st.top() != arr[index])
		{
			st.push(num);
			num++;
			str += "+";
		}
		else
		{
			st.pop();
			index++;
			str += "-";
		}
	}

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << "\n";
	}
}