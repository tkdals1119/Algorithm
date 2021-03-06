#include <iostream>
#include <stdlib.h>

using namespace std;

int gcd(int a, int b)
{
	int n = 0;
	while (1)
	{
		n = a % b;
		if (n == 0) return b;
		a = b;
		b = n;
	}
}

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;

	printf("최대공약수는 %d\n", gcd(a, b));
	printf("최소공배수는 %d\n", (a*b) / gcd(a, b));

	return 0;
}


