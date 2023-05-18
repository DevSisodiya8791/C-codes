#include <stdio.h>

int main(){
	char c;
	
	printf("Enter the character : \n");
	scanf("%c",&c);
	
	(c >= 97 && c <= 122) ?  
    printf("\nCharacter entered is a lowercase English alphabet\n") :  
    printf("\nCharacter entered is not a lowercase English alphabet\n"); 
    
    return 0;
	
}
