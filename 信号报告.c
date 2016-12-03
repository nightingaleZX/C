#include <stdio.h> 

int main(void)
{
	//输入无线电台RS报告 
	int rs;	
	scanf("%d",&rs);
	
	//判断是否为有效报告 
	if(rs>=11&&rs<=59&&rs%10!=0) 
	{				
		//输出信号强度 
		switch (rs%10)
		{
			case 1: printf("Faint signals, barely perceptible"); break;
			case 2: printf("Very weak signals"); break;
			case 3: printf("Weak signals"); break; 
			case 4: printf("Fair signals"); break;
			case 5: printf("Fairly good signals"); break;
			case 6: printf("Good signals"); break;
			case 7: printf("Moderately strong signals"); break;
			case 8: printf("Strong signals"); break;
			case 9: printf("Extremely strong signals"); break;
		}
		
		//连接标点 
		printf(", ");
		
		//输出信号可辨度
		switch (rs/10) 
		{
			case 1: printf("unreadable"); break;
			case 2: printf("barely readable, occasional words distinguishable"); break;
			case 3: printf("readable with considerable difficulty"); break;
			case 4: printf("readable with practically no difficulty"); break;
			case 5: printf("perfectly readable"); break;
		}
		
		//末尾标点 
		printf(".");
		
	}
	else printf("您输入的信号报告范围有误！");
	
	return 0;
}
