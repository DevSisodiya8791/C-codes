// Code to check prime or not


#include <stdio.h>
int main(){
	int i,num,isPrime=1;
	printf("Enter the number :");
	scanf("%d",&num);
	
	for (i=2;i<=num/2;i++){
		if(num%i==0){
			isPrime=0;
			break;
		}
	}
	
	if (isPrime==1 && num>1){
		printf("Number is prime");
	}else
		printf("Number is not prime");
		
	return 0;
	
}
