#include<stdio.h>
main()
{
int num,a,b,c;
printf("请输入一个数字：\n");
scanf("%d",&num);

c=num%10;		//求个位 
b=num/10%10;		//求十位 
a=num/100;		//求百位 
 
if(c!=0)//如果个位不为零 
{
	printf("%d",c);
	printf("%d",b);		
}
else
{	//如果个位为零且十位不为零 
	if(b!=0)
	printf("%d",b);
}

printf("%d",a);
}
