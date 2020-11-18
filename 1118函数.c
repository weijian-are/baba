#include<stdio.h>
void main(){
	int x;
	scanf("%d",&x);
	printf("%d",x);
	if(x<1){
	printf("%d",x);
	}
	else if(1<=x<10){
	
		printf("%d",2*x-1);
	}
	else if(x>=10){
	
		printf("%d",3*x-11);
	}
	else{
	
		printf("*********");
	}

}
