#include<stdio.h>
int main(){
	int m;
	printf("perform diagonal sum of 2D array.\n");
	printf("Enter array Size :");
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
		for(j=0;j<m;j++){
			if(a[i][j]<0){
				printf("%d ",a[i][j]);
			}
		
		}
		printf("\n");
	}

	
	return 0;
}

