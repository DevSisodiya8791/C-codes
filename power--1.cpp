// power calculation

#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	
	printf("Enter base value:\n");
	scanf("%f",&x);
	
	printf("Enter Exponent value:\n");
	scanf("%f",&y);
	
	printf("\n\nPower after caluculation =%f",pow(x,y));
	
	return 0;
	
}
