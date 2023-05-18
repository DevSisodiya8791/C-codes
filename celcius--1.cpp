#include <stdio.h>
int main(){
	float a;
	
	printf("Enter the value in Celcius\n");
	scanf("%f",&a);
	
	printf("\nTemperature in fehrenheit:\n%f",(a*9/5)+32);
	
	return 0;
	
}
