#include<stdio.h>

int main()
{
	double x, y;
	
	printf("������x��ֵ��");
	scanf("%lf", &x);
	
	//x�Ƿ�С��0 
	switch (x < 0)
	{
		//xС��0 
		case 1: y=-1; break;
		//x���ڵ���0 
		case 0:
		{
			//x�Ƿ����0 
			switch (x == 0)
			{
				//x����0 
				case 1: y=0; break;						
				//x����0 
				case 0:	y=x*2; break;
			}						
		}		
	}
	
	printf("y�Ľ���ǣ�%f",y);
	
	return 0;
	
}



