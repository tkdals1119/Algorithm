// ���Ϸ� 1��

//10���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� 3, 5, 6, 9 �̰�, �̰��� ��� ���ϸ� 23�Դϴ�.
//
//1000���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� ��� ���ϸ� ���ϱ��?

#include <iostream>

int main(int argc, char** argv) {
	int i, result;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	
	
	for(i=1; i<1000; i++)
	{
		if(i % 3 == 0)
		{
			sum1+=i;
		}		
		
		if(i % 5 == 0)
		{
			sum2+=i;
		}
		
		if(i % 15 == 0)
		{
			sum3+=i;
		}
	
	}
	result = sum1 + sum2 - sum3;
	
	printf("%d\n", result);
	return 0;
}
