// 백준 180305

#include <iostream>
#include <stdlib.h>

using namespace std;

int lcm(int m, int n)
{
	int a, b, z;
	a = m; b = n;
	while (1)
	{
		z = a % b;
		if (z == 0) break;
		a = b; b = z;
	}
	return (m*n) / b;
}
int main()
{
	int tc;
	int m, n, x, y;
	cin >> tc;

	while (tc--)
	{
		cin >> m >> n >> x >> y;
		int res_lcm = lcm(m, n);

		while (x != y && x <= res_lcm)
		{
			if (x < y) x += m;
			else y += n;
		}
		if (x != y) printf("-1\n");
		else printf("%d\n", x);
	}
	return 0;
}


