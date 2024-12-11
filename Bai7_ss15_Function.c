#include<stdio.h>
int mang(int *m, int *n){
	return 0;
}
int main(){ 
	int m=3;
	int n=4;
	mang(&m, &n); 
	int num[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("Nhap vao so [%d][%d]: ", i, j);
			scanf("%d",&num[i][j]); 
		} 
	}
	printf("\nMang da nhap vao la: \n"); 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t",num[i][j]); 
		}
		printf("\n"); 
	}
	 
}
