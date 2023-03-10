#include<stdio.h>
int main(){
	int m;
	printf("Perform anti-diagonal sum of 2D array\n");
	printf("Enter array matrix size :");
	scanf("%d",&m);
	int a[m][m];
	int i,j,sum=0;
	for (i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("enter element [%d] [%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0;i<m;i++){
		for(j=0;j<m;j++){
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		for (i=0;i<m;i++){
			sum = sum +a[i][m-i-1];
	}
	printf("sum of anti-diagonal : %d",sum);
	
	return 0;
}
