#include<stdio.h>
#include<windows.h>

void main(){

	int i;
	int j;
	int a[]={999,999,999,999,999,999,999,999,999,999};
	int a2[20][10];
	for(i=0;i<20;i++){
		for(j=0;j<10;j++){
			a2[i][j]=999;
			printf("%d  ",a2[i][j]);}
		printf("\n");
	
	}

	Sleep(5000);

		for(i=0;i<20;i++){
		for(j=0;j<10;j++){
			a2[i][j]=0;
			printf("%d  ",a2[i][j]);}
		printf("\n");
	
	}
	
}
