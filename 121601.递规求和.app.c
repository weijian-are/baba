#include<stdio.h>

int myFuction(int x){
	if(x<=0){
	return 0;
	}
	return x+myFuction(x-1);
}

	void main(){
		int i;
		while(1){
		scanf("%d",&i);
		if(i>0){
	
		printf("%d\n",myFuction(i));
		}
		else{
		printf("输入无效");
		}
		}
	}
