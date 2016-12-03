#include <stdio.h> 

int main(void)
{
	//北京时间，世界协调时 ，小时，分 
	int bjt,utc,h,m;
	
	//输入北京时间
	scanf("%d",&bjt); 
	//判断时间是否合法 
	if(bjt>=0&&bjt<=2359)
	{
		//分解得到小时和分 
		h=bjt/100; //printf("h=%d，",h);
		m=bjt%100; //printf("m=%d\n",m);
	
		//不跨日的换算 
		if(h>=8) utc=(h-8)*100+m;
		//跨日的换算 
		else utc=(24+(h-8))*100+m; 
	
		//输出世界协调时 
		printf("%d",utc);
	}

	return 0;
}
