#include<stdio.h>
void main(){

	int i[3];
	int a,b,l;
	scanf("%d %d %d",&i[0],&i[1],&i[2]);

	for(a=0;a<3;a++)
	{
		for(b=a+1; b<3; b++)
		{
			if(i[a] > i[b])
			{
				l = i[a];
				i[a]=i[b];
				i[b]=l;
			}
		}
	}

	for(a=0;a<3;a++){
	
		printf("%d ",i[a]);
	}
}
