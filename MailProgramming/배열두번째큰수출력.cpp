// MailProgramming 
// 배열에서 두번째로 큰 값 출력

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int tc; cin >> tc;
	int *arr = new int[tc];
	int *arr2 = new int[tc];
	int max = 0, sec_max = 0, flag = 0;

	for (int i = 0; i < tc; i++)
	{
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
	}

	for (int i = 0; i < tc; i++)
	{
		if (max != arr[i]) flag = 1;
		if (arr[i] != max && sec_max < arr[i]) sec_max = arr[i];
	}

	if (tc == 1) printf("%d\n", arr[0]);
	else if(flag==0) printf("Does not exist.\n");
	else printf("%d\n", sec_max);

	return 0;
}