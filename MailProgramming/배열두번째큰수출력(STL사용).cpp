// MailProgramming 
// 배열에서 두번째로 큰 값 출력(정렬 STL사용)

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
	sort(arr, arr + tc, greater<int>());

	if (tc == 1) printf("%d\n", arr[0]);
	else if(arr[0] == arr[tc-1]) printf("Does not exist.\n");
	else printf("%d\n", arr[1]);

    return 0;
}

