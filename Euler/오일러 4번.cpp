// 오일러 4번

//앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.
//
//두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.
//
//세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까? 

#include <iostream>

bool Cal(int num)
{
	int arr[6] = {0, 0, 0, 0, 0, 0};
	
	arr[0] = (num/1) % 10;
	arr[1] = (num/10) % 10;
	arr[2] = (num/100) % 10;
	arr[3] = (num/1000) % 10;
	arr[4] = (num/10000) % 10;
	arr[5] = (num/100000) % 10;
	
	if(arr[0] == arr[5] && arr[1] == arr[4] && arr[2] == arr[3])
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int argc, char** argv) {
	int i, j;
	int num = 0;
	int res = 0;

	for(i=999; i>0; i--)
	{
		for(j=1; j<1000; j++)
		{
			num = i * j;

			if(Cal(num) && num > res)
			{
				res = num;
			}
		}
	}
	
	printf("%d", res);
	return 0;
}
