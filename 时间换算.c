#include <stdio.h> 

int main(void)
{
	//����ʱ�䣬����Э��ʱ ��Сʱ���� 
	int bjt,utc,h,m;
	
	//���뱱��ʱ��
	scanf("%d",&bjt); 
	//�ж�ʱ���Ƿ�Ϸ� 
	if(bjt>=0&&bjt<=2359)
	{
		//�ֽ�õ�Сʱ�ͷ� 
		h=bjt/100; //printf("h=%d��",h);
		m=bjt%100; //printf("m=%d\n",m);
	
		//�����յĻ��� 
		if(h>=8) utc=(h-8)*100+m;
		//���յĻ��� 
		else utc=(24+(h-8))*100+m; 
	
		//�������Э��ʱ 
		printf("%d",utc);
	}

	return 0;
}
