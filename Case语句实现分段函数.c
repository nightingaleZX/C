#include<stdio.h>

int main()
{
	double x, y;
	
	printf("请输入x的值：");
	scanf("%lf", &x);
	
	//x是否小于0 
	switch (x < 0)
	{
		//x小于0 
		case 1: y=-1; break;
		//x大于等于0 
		case 0:
		{
			//x是否等于0 
			switch (x == 0)
			{
				//x等于0 
				case 1: y=0; break;						
				//x大于0 
				case 0:	y=x*2; break;
			}						
		}		
	}
	
	printf("y的结果是：%f",y);
	
	return 0;
	
}



