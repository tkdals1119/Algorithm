#include <iostream>
#include <string>

using namespace std;

int main()
{
	int max = 1;
	int last_max = 1;
	int count = 1;
	int num = 0;

	cin >> num;
	if (num == 1)
	{
		printf("%d", 1);
		return 0;
	}
	else
	{
		while (1)
		{
			max = last_max + (6 * count);

			if (num > last_max && num <= max)
			{
				printf("%d", count + 1);
				break;
			}
			else
			{
				last_max = max;
				count++;
			}
		}
	}
	return 0;
}

