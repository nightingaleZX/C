#include<stdio.h>
main()
{
int num,a,b,c;
printf("������һ�����֣�\n");
scanf("%d",&num);

c=num%10;		//���λ 
b=num/10%10;		//��ʮλ 
a=num/100;		//���λ 
 
if(c!=0)//�����λ��Ϊ�� 
{
	printf("%d",c);
	printf("%d",b);		
}
else
{	//�����λΪ����ʮλ��Ϊ�� 
	if(b!=0)
	printf("%d",b);
}

printf("%d",a);
}
