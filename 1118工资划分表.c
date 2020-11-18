#include<stdio.h>
void main(){

	int i;
	printf("请输入你的工资");
	scanf("%d",&i);
	if(i<0){
	
		printf("花呗人");
	}
	else if(i>=0 &&i<=500){
	
		printf("赤贫");
	}
	else if(i>=501 &&i<=1500){
	
		printf("贫穷");
	}
	else if(i>=1501 &&i<=5000){
	
		printf("人上人");
	}
	else if(i>=5001 &&i<=150000000){
	
		printf("程序员");
	}
	else{
		printf("输入错误");
	}
}
