// 완전수 판별

#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int num; cin >> num;
	int sum = 0;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				sum += j;
			}
		}
		if (i == sum) printf("완전수는 %d\n", i);
		sum = 0;
	}
}