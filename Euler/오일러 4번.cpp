// ���Ϸ� 4��

//�տ������� ���� ���� �ڿ������� ���� ���� ����� ���� ���� ��Ī��(palindrome)��� �θ��ϴ�.
//
//�� �ڸ� ���� ���� ���� �� �ִ� ��Ī�� �� ���� ū ���� 9009 (= 91 �� 99) �Դϴ�.
//
//�� �ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī���� ���Դϱ�? 

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
