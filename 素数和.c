#include <stdio.h> 

int main(void)
{
	int x=1; //��2��ʼö�� 	
	int n,m; 
	int cnt=0; //������ 
	int sum=0;
	
	scanf("%d %d",&n,&m);

	//��������m��������ֹͣѭ�� 
	while(cnt<=m)
	{
		x++; 
		int i; 
		int isPrime=1; //�Ƿ�Ϊ���� 
		
		//i��2��ʼö�٣�x�ܱ�i������������			
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				isPrime=0;break; //��Ϊ�����˳�ѭ�� 
			}
		}
		
		//�����ǰ����Ϊ���������㷶Χ�����ۼ� 
		if(isPrime)
		{
			cnt++; //�������ۼ� 				
			if(n<=cnt&&cnt<=m) sum+=x;
		} 
			
	}
		
	printf("%d\n",sum);
	
	return 0; 
}
