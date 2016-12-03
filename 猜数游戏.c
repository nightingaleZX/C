#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	int num=rand()%100+1;
	int count=0;
	int a=0;
	printf("我已经想好了一个数。\n");
	do{
		printf("请猜0到100之间的数：");
		scanf("%d",&a);
		count++;
		if(a>num)
			printf("你猜的数大了。");
		else if(a<num)
			printf("你猜的数小了。");
	}while(a!=num);
	printf("太好了，你用了%d次就猜到了答案。\n",count);
}
