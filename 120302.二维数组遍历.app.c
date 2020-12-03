#include<stdio.h>
void main(){

	int i;
	int j;
	int a[]={10,20,33};
	int a2[2][3]={
	
	{22,55,77},
	{66,99,68}

	};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d  ",a2[i][j]);}
		printf("\n");
	
	}
	
}
