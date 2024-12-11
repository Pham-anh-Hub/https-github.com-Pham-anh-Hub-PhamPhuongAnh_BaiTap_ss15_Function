#include<stdio.h>
int timUCLN(int *a, int *b){
	return 0; 
}
int main(){
	int a=36; 
	int b=24;
	timUCLN(&a, &b);
	if(a==b){
		printf("UCLN = %d",a);	 
	}else{
	while(a!=b){
			if(a>b){
				a = a-b;
				
			}else{
				b = b-a;
			}
			
		}printf("UCLN = %d",a);
		}
	return 0; 
} 
