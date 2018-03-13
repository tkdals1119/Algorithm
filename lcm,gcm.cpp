#include <iostream>
#include <stdlib.h>

using namespace std;

int gcm(int a, int b)
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

	printf("최대공약수는 %d\n", gcm(a, b));
	printf("최소공배수는 %d\n", (a*b) / gcm(a, b));

	return 0;
}


