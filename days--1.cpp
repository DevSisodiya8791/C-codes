//code conversion of days in years,months,weeks.

#include <stdio.h>
int main(){
	
	int d;
	
	printf("Enter days:\n");
	scanf("%d",&d);
	
	printf("\nDays in weeks:%d",d/7);
	
	printf("\nDays in months:%d",d/30);
	
	printf("\nDays in years:%d",d/365);    
	
	
	return 0;
}
