// 백준 10845
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	int num;
	queue<int> q;
	string str;

	while (tc)
	{
		cin >> str;
		if (str.compare("push") == 0)
		{
			cin >> num;
			q.push(num);
		}
		else if (str.compare("pop") == 0)
		{
			if (q.empty()) cout << "-1" << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (str.compare("size") == 0)
		{
			cout << q.size() << "\n";
		}
		else if (str.compare("empty") == 0)
		{
			if (q.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (str.compare("front") == 0)
		{
			if (q.empty()) cout << "-1" << "\n";
			else cout << q.front() << "\n";
		}
		else if (str.compare("back") == 0)
		{
			if (q.empty()) cout << "-1" << "\n";
			else cout << q.back() << "\n";
		}
		tc--;
	}
}