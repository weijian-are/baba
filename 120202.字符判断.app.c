#include<stdio.h>
void main(){

	char i;
	printf("欢迎来到王者峡谷\n");
	scanf("%c",&i);
	switch(i){
	
		case 'a':printf("左键");break;
		case 'w':printf("上键");break;
		case 's':printf("下键");break;
		case 'd':printf("左键");break;
		
	
													 							
	default:printf("i为其他值");
	}

}
