// 백준 1181
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(const string &st1, const string &st2)
{
	if (st1.size() == st2.size()) return st1 < st2;
	else return st1.size() < st2.size();
}

int main()
{
	vector<string> str_v;
	int tc; cin >> tc;
	string str;

	for (int i = 0; i < tc; i++)
	{
		cin >> str;
		str_v.push_back(str);
	}

	sort(str_v.begin(), str_v.end(), comp);

	vector<string>::iterator itr;
	vector<string>::iterator itr_end;

	itr_end = unique(str_v.begin(), str_v.end());

	for (itr = str_v.begin(); itr < itr_end; itr++)
	{
		cout << *itr << "\n";
	}
}