// ���Ϸ� 7��

//�Ҽ��� ũ�� ������ �����ϸ� 2, 3, 5, 7, 11, 13, ... �� ���� �˴ϴ�.
//
//�� �� 10,001��°�� �Ҽ��� ���ϼ���. 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i = 2;
	int j;
	int box = 0;
	int count = 0;
	int count2 = 0;
	

	while(true)
	{
		for(j=1; j<=i; j++)
		{	
			if(i % j == 0)
			{
				count++;
			}
		}	
		if(count > 2)
		{
			count = 0;
		}
		else
		{
			count = 0;
			box = i;
			count2++;		
	    }
	    i++;
	    
	    if(count2 == 10001)
	    {
	    	break;
		}

	}
	
	printf("%d", box);	
	return 0;
}
