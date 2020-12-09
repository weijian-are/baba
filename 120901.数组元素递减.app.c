#include<stdio.h>
void main(){
int i,j,a=90;
int arr2d[9][10]={

	{0}
};
for(i=0;i<9;i++){
	for(j=0;j<10;j++){
	
		printf("%d ",arr2d[i][j]);
	}
	printf("\n");
}
for(i=0;i<9;i++){
	for(j=0;j<10;j++){
	
	arr2d[i][j]=a--;
	printf("%-2d ",arr2d[i][j]);
	}
	printf("\n");
}
}
