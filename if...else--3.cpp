// Code for if else questions------3
// Code to find wheather a number is positve,negative or zero.

#include <stdio.h>

int main(){
	
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if (a>0){
		printf("Numbre is positive");
	}
	else if(a<0){
		printf("Number is negative ");
	}
	else{
		printf("Number is equal to zero ");
	}
	return 0;
}
