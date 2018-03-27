// 3과 7로 만들 수 있는 수

#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int num; cin >> num;
	int th = 3;
	int res = 0;
	int cnt = 1;

	if (num % 3 == 0 || num % 7 == 0) printf("맞음\n");
	else
	{
		while (1)
		{
			res = num - th;
			if (res % 7 == 0 || res % 3 == 0)
			{
				printf("맞음\n");
				break;
			}
			else
			{
				cnt++;
				th *= cnt;
			}

			if (num < th)
			{
				printf("아님\n");
				break;
			}
		}
	}
}