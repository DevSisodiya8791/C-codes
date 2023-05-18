// calculating area of aequilateral triangle

#include <stdio.h>
#include <math.h>

int main()
{
	float s,a;
	
	printf("Enter the side:\n");
	scanf("%f",&s);
	
	a=(sqrt(3))/4*s*s;
	
	printf("Area:\n%f",a);
	return 0;
	
}
