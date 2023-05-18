// function 1
// code to find cube of a number using fuction

#include <stdio.h>
#include <math.h>

int findcube(int a){
	return a*a*a;
}

int main()
{
	int a,cube;
	printf("Enter the number :");
	scanf("%d",&a);
	cube =findcube(a);
	printf("\nCube of given number : %d",cube);
	return 0;
	
}
