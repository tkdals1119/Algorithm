// 매일프로그래밍 180312

#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int arr_size; cin >> arr_size;
	int target; cin >> target;
	int *arr = new int[arr_size];
	int saved_num;

	for (int i = 0; i < arr_size; i++)
	{
		cin >> arr[i];
	}

	map<int, int> imap;

	for (int i = 0; i < arr_size; i++)
	{
		saved_num = target - arr[i];
		if (imap.count(saved_num) != 0) printf("%d, %d\n", imap[saved_num], i);
		else imap.insert(pair<int, int>(arr[i], i));
	}
	return 0;
}