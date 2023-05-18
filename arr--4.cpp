//code to interchange diagonal elements of matrix

#include <stdio.h>
int main(){
	
	int a,b;
	printf("Enter the rows and columns :");
	scanf("%d %d",&a,&b);
	
	int c[a][b],i,j,temp;
	
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("Enter the values :");
			scanf("%d",&c[i][j]);
		}
	}
	
	if(a == b)
  	{
  		for(i = 0; i < a; i++)
  		{
  			temp = c[i][i];
  			c[i][i] = c[i][a - i - 1];
  			c[i][a - i - 1] = temp;
	   	}		
  	  
 		printf("\n Matrix Elemnts after Interchanging Diagonals are: \n");
 		for(i = 0; i < b; i++)
  		{
   			for(j = 0; j < a; j++)
    		{
      			printf("%d \t ", c[i][j]);
    		}
    		printf("\n");
  		}
  	}
  	else
  	{
  		printf("\n The Matrix that you entered is Not a Square matrix" );
	}
	
}

