// marks

#include <stdio.h>
#include <math.h>

int main(){
	float math,science,sst,hindi,english,P,total;
	
	printf("Note::  All marks are out of 100\n\n");
	
	printf("Enter the marks of math:\n");
	scanf("%f",&math);
	
	printf("Enter the marks of science:\n");
	scanf("%f",&science);
	
	printf("Enter the marks of sst:\n");
	scanf("%f",&sst);
	
	printf("Enter the marks of hindi:\n");
	scanf("%f",&hindi);
	
	printf("Enter the marks of english:\n");
	scanf("%f",&english);
	
	total= math+science+sst+hindi+english;
	
	printf("\nTotal marks of all subject:\n%f",total);
	
	printf("\n\nAverage of all subjects:\n%f",((total)/5));
	
	P = (total/500)*100;
	
	printf("\n\nPercentage:\n%f",P);
	
	return 0;
	
}
