// 매일프로그래밍 180305

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <cstdbool>
#include <math.h>

using namespace std;

bool cal(int num)
{
	int revertedback = 0;
	if (num < 0 && num / 10 == 0)
	{
		return false;
	}

	while (num > revertedback)
	{
		revertedback = revertedback * 10 + num % 10;
		num /= 10;
	}
	return num == revertedback || num == revertedback / 10;
}

int main()
{
	int num = 0, count = 0;
	int ten = 1;
	cin >> num;

	if (cal(num)) printf("팰린드롬입니다!!\n");
	else printf("팰린드롬이 아닙니다ㅠㅠ\n");

	return 0;
}


