#include<stdio.h>
void main(){
	int i;

	printf("请输入您的工资");
	

	scanf("%d",&i);

	if(i<0){
	
		printf("花呗人");
	}
	else if(i>0 &&i<=1000){
	
		printf("贫穷打工人");
	}
	else if(i>=1001 &&i<=3000){
	
		printf("一般般打工人");
	}
	else if(i>=3001 &&i<=5000){
	
		printf("打工人打工魂打工都是人上人");
	}
	else if(i>=5001 &&i<=50000){
	
		printf("程序猿");
	}
	else if(i>=50001 &&i<=900000){
	
		printf("富婆包养");
	}
	else{
	
		printf("输入错误");
	}
}
