#include<stdio.h>
#include<stdlib.h>
void  addArray(int m, int n ,int num[20][20]){ //Nhap gia tri cac phan tu cua mang 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("Nhap num[%d][%d]", i, j);
			scanf("%d",&num[i][j]); 
		} 
	}
}
void showItem(int m, int n, int num[20][20]){
  //In ra cac phan tu cua mang theo ma tran
  printf("Cac phan tu trong mang la: \n"); 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
}

void showConerItem(int m, int n, int num[20][20]){
	//In ra cac phan tu nam o goc
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if((j==0 || j==n-1) && (i==0|| i==m-1)){
				printf("%d\t",num[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

void showBoderItem(int m, int n, int num[20][20]){
	//In ra cac phan tu bien
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(j==0 || j==n-1 || i==0|| i==m-1){
				printf("\t%d",num[i][j]);
			}else{
				printf("\t");
			} 
		}
		printf("\n");
	}
}

void  showDiagonalItem(int m, int n, int num[20][20]){
//In ra cac phan tu nam o duong cheo chinh va duong cheo phu theo ma tran
	printf("Duong cheo chinh la \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				printf("%d\t",num[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("Duong cheo phu la: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i+j==n-1){
				printf("%d\t",num[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	} 
}

void showPrimeItem(int m, int n, int num[20][20], int count){  //In ra cac phan tu la so nguyen to theo ma tran 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			count = 0;
			for(int a=2; a<=num[i][j]; a++){
				if(num[i][j]%a==0){
					count++;  
				} 
			}
				if(count==1){
					printf("%d\t",num[i][j]); 
				}else{
					printf("\t"); 
				}
		}
		printf("\n");
	}
}
	
int main(){
	int num[20][20];
	int m, n, choice, count, temp = -1 ;
	do{
		printf("\n*******MENU*******\n");
		printf("1. Nhap vao gia tri cac phan tu cua mang \n");
		printf("2. In ra cac phan tu cua mang theo ma tran \n");
		printf("3. In ra cac phan tu o goc theo ma tran \n");
		printf("4. In ra cac phan tu o bien theo ma tran \n");
		printf("5. In ra cac phan tu nam o duong cheo chinh va duong cheo phu theo ma tran \n");
		printf("6. In ra cac phan tu la so nguyen to theo ma tran \n"); 
		printf("7. Thoat \n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				temp = 1;
				printf("Nhap vao so hang: ");
				scanf("%d",&m);
				printf("Nhap vao so cot: ");
				scanf("%d", &n);
				addArray(m, n, num );
				break;
			case 2:
				if(temp==1){
					showItem(m,n,num );
				}else{
					printf("Mang chua nhap, vui long chon 1");
				} 
				
				break;
			 case 3:
			 	if(temp==1){
			 		showConerItem(m, n, num);
				 }else{
					printf("Mang chua nhap, vui long chon 1"); 
				}
			 	
			 	break;
			case 4:
				if(temp==1){
					showBoderItem(m, n, num);
				}else{
					printf("Mang chua nhap, vui long chon 1");
				}
				
				break;
			case 5:
				if(temp==1){
					showDiagonalItem(m, n, num);
				}else{
					printf("Mang chua nhap, vui long chon 1");
				}
				
				break;
			case 6:
				if(temp==1){
					showPrimeItem(m, n, num, count);
				}else{
					printf("Mang chua nhap, vui long chon 1");
				} 
				break;
			case 7:
				printf("Thoat !!");
				exit(0);
				break;
			default:
				printf("0");
		}
	}while(1); 
	
	return 0; 
}
 
