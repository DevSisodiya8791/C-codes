// Code for if else questions-----7
// Code to check whether a character is alphabet,digit or a special character

#include <stdio.h>
int main(){
	char ch;
	printf("Enter the charcter : ");
	scanf("%c",&ch);
	
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <=90)){
		printf("Charcter is alphabet");
	}
	else if (ch >= '0' && ch <= '9'){
		printf("Charcter is digit");
	}
	else{
		printf("Charcter is special charcter");
	}
	return 0;
}
