#include <stdio.h>

int main(){
	float a;
	
	printf("Enter value in cm:\n");
	scanf("%f",&a);
	
	printf("\n\nValue in meter:\n%f",(a/100));
	
	
	printf("\n\nValue in kilometer:\n%f",(a/100000));
	
	return 0;
	
}
