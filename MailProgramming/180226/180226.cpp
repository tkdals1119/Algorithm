// 매일프로그래밍 180226

#include <iostream>
#include <string>
#include <list>

using namespace std;

void recurse(string ans, string cur, int open, int close, int n);

void Open_Close(int n)
{
	int i = 0;
	string ans;

	recurse(ans, "", 0, 0, n);
}

void recurse(string ans, string cur, int open, int close, int n)
{
	if (cur.length() == 2 * n)
	{
		printf("%s\n", cur.c_str());
	}

	if (open < n)
	{
		recurse(ans, cur + "(", open + 1, close, n);
	}

	if (close < open)
	{
		recurse(ans, cur + ")", open, close + 1, n);
	}
}

int main()
{
	int n = 0, i = 0;
	cin >> n;
	list<string> res;

	Open_Close(n);
	return 0;
}
