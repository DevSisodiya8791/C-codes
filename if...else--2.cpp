// Code for if else questions------2

// Code for finding maximum between three numbers


#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter the numbers :\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a>b) && (a>c)){
		printf("a is the greatest number");
	}
	else if((b>a) && (b>c)){
		printf("b is the greatest number");
	} 
	else{
		printf("c is the greatest number");

	}
	return 0;
}

