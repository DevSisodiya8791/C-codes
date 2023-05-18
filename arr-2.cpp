// find sum of main/major diagonal elements of a matrix

#include <stdio.h>
int main(){
	
	int a,b;
	printf("Enter the rows and columns : ");
	scanf("%d %d",&a,&b);
	
	int c[a][b],i,j,sum=0;
	
	for (i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the values of first matrix : ");
			scanf("%d",&c[i][j]);	
		}
	}
	for (i=0;i<a;i++){
		for(j=0;j<b;j++){
			if (c[i]==c[j])
				sum=sum+c[i][j];
		}
	}
	printf("Sum of major diagonal elements =%d",sum);
}
