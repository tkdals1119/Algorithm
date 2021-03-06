// 백준 10828
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	int data;
	string str;
	stack<int> st;

	while (tc)
	{
		cin >> str;

		if (str.compare("push") == 0)
		{
			cin >> data;
			st.push(data);
		}
		else if (str.compare("pop") == 0)
		{
			if (st.empty()) cout << "-1" << "\n";
			else
			{
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (str.compare("size") == 0)
		{
			cout << st.size() << "\n";
		}
		else if (str.compare("empty") == 0)
		{
			if (st.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (str.compare("top") == 0)
		{
			if (st.empty()) cout << "-1" << "\n";
			else cout << st.top() << "\n";
		}
		tc--;
	}
}