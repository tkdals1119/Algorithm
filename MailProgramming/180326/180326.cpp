// 매일프로그래밍 180326

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

void reverserString(string s);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str = "abc 123 apple";
	stringstream iss(str);
	string token;

	while (getline(iss, token, ' '))
	{
		reverserString(token);
		cout << " ";
	}
	cout << "\n";
	return 0;
}
void reverserString(string s)
{
	for (int i = s.length() - 1; i >= 0; i--)
	{
		cout << s.at(i);
	}
}


