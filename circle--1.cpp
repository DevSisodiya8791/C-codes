#include <stdio.h>

int main(){
	float r;
	
	printf("Enter the radius:\n");
	scanf("%f",&r);
	
	printf("\nDiamter of circle is:\n%f",2*r);
	
	printf("\n\nCircumference of circle is :\n%f",2*3.14*r);
	
	printf("\n\nArea of circle is:\n%f",3.14*r*r);
	
	return 0;
	
}
