#include <stdio.h>

int main(void){
	
	int a,b,c,Max;
	
	scanf("%d %d %d",&a,&b,&c);
	
	Max=(a > b)? (a > c ? a : c) : (b > c ? b : c) ;
	
	printf("\nBiggest number from all three is :  %d",Max);
	
}
