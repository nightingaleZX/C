#include <stdio.h>

int main(void)
{
	int n,x; //原始数，分解数
	int b=1; //二进制数最大值 
	int c=0; //二进制数中为0的值 
	int count=1; //位号 
	
	scanf("%d",&n);	
	
	//一位数以上
	while(n>9)
	{
		//345，345/10=34，345-34*10=5； 
		//x保存原始数。n/=10划掉个位数， x-n*10得到前面所划的个位数 
		x=n; n/=10;					
		//个位数比较与之对应的位号奇偶性是否一致 
		if(count%2!=(x-n*10)%2) 
			c+=b*2/2; //计算二进制数中为0的值并累加	
	
		//二进制数最大值+1。位号累加	
		b*=2; count++;
		 //printf("b=%d,c=%d\n",b,c);					
	}	
	//最后一位数的比较 
	if(count%2!=n%2) 
		c+=b*2/2;
	//2的n次方 
	b*=2;
	 //printf("b=%d,c=%d\n",b,c);
	// 输出：-1，-为0的值 
	printf("%d",b-1-c);
			
	return 0;
}
