// ���Ϸ� 2��

//�Ǻ���ġ ������ �� ���� �ٷ� ���� �� �� ���� ���� ���� �˴ϴ�. 1�� 2�� �����ϴ� ��� �� ������ �Ʒ��� �����ϴ�.
//
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//¦���̸鼭 4�鸸 ������ ��� ���� ���ϸ� �󸶰� �˴ϱ�? 

#include <iostream>

int fibo(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else if(num == 1)
	{
		return 1;
	}
	else if(num == 2)
	{
		return 2;
	}
	else
	{
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main(int argc, char** argv) {
	     int i = 1;
	    int sum = 0;

        while(true)
        {
        	i++;
        	if(fibo(i) % 2 == 0)
        	{
        		sum+=fibo(i);
			}
			else if(fibo(i) >= 4000000)
			{
				printf("¦���� ���� ��� ���� %d ", sum);
				break; 
			}
		}
	return 0;
}
