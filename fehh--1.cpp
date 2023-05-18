#include <stdio.h>

int main(){
	float a;
	
	printf("Enter temp in feh:\n");
	scanf("%f",&a);
	
	printf("\nTemp in Celcius:\n%f",(a - 32)× 5/9);
	
	return 0;
	
}
