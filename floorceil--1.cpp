#include <stdio.h>
#include <math.h>	

int main()
{
	float val;
    float fVal,cVal;
    
    
 
    printf("Enter a float value: ");
    scanf("%f",&val);
 
    fVal=floor(val);
    cVal =ceil(val);
    
    printf("floor value:%f",fVal);
    printf("\nceil value:%f\n",cVal);
   
   
    return 0;
	
	
}	
	
	
