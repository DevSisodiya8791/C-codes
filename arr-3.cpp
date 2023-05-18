// find sum of minor diagonal elements of matrix

#include <stdio.h>
int main(){
	
	int a,b;
	printf("Enter the rows and columns :");
	scanf("%d %d",&a,&b);
	
	int c[a][b],i,j,sum=0;
	
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("Enter the value :");
			scanf("%d",&c[i][j]);
		}
	}
	
	for(i=0,j=b-1;i<a;i++,j--){
			sum+=c[i][j];
	
}
printf("Sum of minor diagonal =%d",sum);
}
