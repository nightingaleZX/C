#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	int num=rand()%100+1;
	int count=0;
	int a=0;
	printf("���Ѿ������һ������\n");
	do{
		printf("���0��100֮�������");
		scanf("%d",&a);
		count++;
		if(a>num)
			printf("��µ������ˡ�");
		else if(a<num)
			printf("��µ���С�ˡ�");
	}while(a!=num);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n",count);
}
