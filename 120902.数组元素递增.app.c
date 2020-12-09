#include<stdio.h>
void main(){
int i,j,a=1;
int arr2d[19][20]={

	{0}
};
for(i=0;i<19;i++){
	for(j=0;j<20;j++){
	
		printf("%d ",arr2d[i][j]);
	}
	printf("\n");
}
for(i=0;i<19;i++){
	for(j=0;j<20;j++){
	
	arr2d[i][j]=a++;
	printf("%-2d ",arr2d[i][j]);
	}
	printf("\n");
}
}
