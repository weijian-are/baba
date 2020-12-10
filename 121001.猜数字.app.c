#include<stdio.h>
#include<string.h>
void main(){
	int i=15,a;
	
	char a1[100];

	char a2[]="小鸡炖蘑菇";
	char a3[]="宝塔镇河妖";

	printf("想玩游戏么，请先回答问题  天王盖地虎,__________!!\n");
	while(1){
	scanf("%s",&a1);
	if(strcmp(a1,a2)==0){
	printf("你可以进入游戏\n");
	while(1){
		scanf("%d",&a);
		if(a<i || a>i){
		printf("你答错了");
		}
		else{
		printf("恭喜你答对了");
		}
	}
	break;
	}
	else if(strcmp(a1,a3)==0){
	printf("你不配进入游戏\n");
	}
	else{
	
		printf("无效输入");
	}

	}


	
}
