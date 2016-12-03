#include <stdio.h> 

int main(void)
{
	int x=1; //从2开始枚举 	
	int n,m; 
	int cnt=0; //计数器 
	int sum=0;
	
	scanf("%d %d",&n,&m);

	//当超过第m个素数是停止循环 
	while(cnt<=m)
	{
		x++; 
		int i; 
		int isPrime=1; //是否为素数 
		
		//i从2开始枚举，x能被i整除则不是素数			
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				isPrime=0;break; //不为素数退出循环 
			}
		}
		
		//如果当前数字为素数且满足范围，则累加 
		if(isPrime)
		{
			cnt++; //计数器累加 				
			if(n<=cnt&&cnt<=m) sum+=x;
		} 
			
	}
		
	printf("%d\n",sum);
	
	return 0; 
}
