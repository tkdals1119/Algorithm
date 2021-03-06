// 백준 2054
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str; cin >> str;
	stack<char> st;
	int mul = 1, sum = 0;

	for (int i = 0; i < str.size(); i++)
	{
		switch (str.at(i))
		{
		case '(':
			st.push(str.at(i));
			mul *= 2;
			break;
		case '[':
			st.push(str.at(i));
			mul *= 3;
			break;
		case ')':
			if (i>0 && str.at(i-1) == '(') sum += mul;
			if (st.empty())
			{
				cout << "0" << "\n";
				return 0;
			}
			if (st.top() == '(') st.pop();
			mul /= 2;
			break;
		case ']':
			if (i>0 && str.at(i - 1) == '[') sum += mul;
			if (st.empty())
			{
				cout << "0" << "\n";
				return 0;
			}
			if (st.top() == '[') st.pop();
			mul /= 3;
			break;
		}
	}
	if (st.empty())  cout << sum << "\n";
	else cout << "0" << "\n";
}