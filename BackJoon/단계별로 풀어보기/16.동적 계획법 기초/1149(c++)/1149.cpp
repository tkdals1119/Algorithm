// 백준 1149

#include <iostream>
#include <string>
#define MIN(a, b) (a<b?a:b)

using namespace std;

int main()
{
	int cost[1001][3] = { 0 };
	int sum_cost[1001][3] = { 0 };
	int num = 0;
	cin >> num;

	for (int i=1; i<=num; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> cost[i][j];
		}
	}

	for (int i = 1; i<=num; i++)
	{
		sum_cost[i][0] = MIN(sum_cost[i - 1][1], sum_cost[i - 1][2]) + cost[i][0];
		sum_cost[i][1] = MIN(sum_cost[i - 1][0], sum_cost[i - 1][2]) + cost[i][1];
		sum_cost[i][2] = MIN(sum_cost[i - 1][1], sum_cost[i - 1][0]) + cost[i][2];
	}

	printf("%d\n", MIN(MIN(sum_cost[num][1], sum_cost[num][0]), sum_cost[num][2]));

	return 0;
}

