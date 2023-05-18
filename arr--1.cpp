//checking two matrix are equal or not 

#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the row and column: ");
	scanf("%d %d",&a,&b);
	
	int c[a][b],d[a][b],i,j,flag=0;
	
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("Enter the value of first array :");
			scanf("%d",&c[i][j]);
		}
	}
	
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("Enter values of second array : ");
			scanf("%d",&d[i][j]);
		}
	}
	
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			if(c[i][j]==d[i][j])
				flag=1;
			else
				flag=0;
		}
}
if (flag==1)
	printf("\nBoth matrix are equal ");
else
	printf("\nBoth are not equal ");
}
