// calculating third angle of a triangle

#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c;
	
	printf("Enter first angle:\n");
	scanf("%d",&a);
	
	printf("Enter second angle:\n");
	scanf("%d",&b);
	
	printf("Third angle :\n%d",180-(a+b));
	
	return 0;
	
}
