// calculating compound interest

#include <stdio.h>
#include <math.h>

int main()
{
	float p,r,t,CI;
	
	printf("Enter the principle amount:\n");
	scanf("%f",&p);
	
	printf("Enter the time:\n");
	scanf("%f",&t);
	
	printf("Enter the rate:\n");
	scanf("%f",&r);
	
	CI = p*(pow((1+r/100),t));
	//print the result
	
	printf("Compound Interest = %f", CI);		
	
	return 0;
	
}
