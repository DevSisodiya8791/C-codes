// Code for if else questions-----7
// Code to check whether aalphbaet is vowel or consonant

#include <stdio.h>

int main(){
	
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i'|| ch=='I' || ch=='o' || ch=='O' || ch=='u'|| ch=='U'){
    printf("Vowel");	
	}
	else{
		printf("Consonant");
	}
		return 0;
}
