#include<stdio.h>
void main(){

	int i;
	printf("打工人工资划分表");
	scanf("%d\n",&i);
	if(i<0){
	
		printf("花呗人");
	}
	else if(i>=0 &&i<=500){
	
		printf("赤贫");
	}
	else if(i>=501 &&i<=1500){
	
		printf("贫穷");
	}
	else if(i>=1501 &&i<=3000){
	
		printf("普通清洁工");
	}
	else if(i>=3001 &&i<=5000){
	
		printf("人上人");
	}
	else if(i>=5001 &&i<=12000){
	
		printf("水电工");
	}
	else if(i>=12001 &&i<=50000000000000000){
	
		printf("程序员");
	}
	else{
	
		printf("输出错误");
	}
}
