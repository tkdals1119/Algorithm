// 백준 9012
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
	string str;
	int flag = 0;

	while (tc)
	{
		cin >> str;
		stack<char> st;
		flag = 0;
			for (int i = 0; i < str.size(); i++)
			{
				if (str.at(i) == '(') st.push(str.at(i));
				else if (str.at(i) == ')')
				{
					if (st.empty())
					{
						cout << "NO" << "\n";
						flag = 1;
						break;
					}
					else st.pop();
				}
			}

			if (flag != 1)
			{
				if (st.empty()) cout << "YES" << "\n";
				else cout << "NO" << "\n";
			}			
		tc--;
	}
}