#include<stdio.h>
#include<string.h>
void main(){
	char a1[100];

	char a2[]="春节";
	char a3[]="端午节";
	char a4[]="元宵节";
	char a5[]="中秋节";
	printf("欢迎使用使用吃货小程序!!\n");
	scanf("%s",&a1);
	if(strcmp(a1,a2)==0){
	printf("给老子安排饺子\n");
	}
	else if(strcmp(a1,a3)==0){
	printf("给我安排粽子\n");
	}
	else if(strcmp(a1,a4)==0){
	printf("给我安排汤圆\n");
	}
	else if(strcmp(a1,a5)==0){
	printf("给我安排月饼");
	}
	else{
	printf("吃土吧");
	}
}
