// Code for if else questions-----7
// Code to check whether a character is alphabet or not

#include <stdio.h>

int main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)){
	
        printf("%c is an alphabet.", ch);
    }
	else{
	
        printf("%c is not an alphabet.", ch);
    }
	return 0;
}

