// 문자열 뒤집기
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio> 
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	for (int i = str.length()-1; i >= 0; i--)
	{
		printf("%c", str.at(i));
	}
	printf("\n");

	return 0;
}