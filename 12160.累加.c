#include<stdio.h>

int myFuction(int x){
	if(x<=0){
	return 0;
	}
	return x+myFuction(x-1);
}

	void main(){
	
		printf("%d",myFuction(6));
	}
