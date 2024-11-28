#include<stdio.h>
int main(){
	int n,i,j;
	printf("Moi ban nhap so nguyen:\n");
	scanf("%d",&n);
	int arr[n][n];
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
		printf("Moi ban nhap phan tu tai hang %d, cot %d:\n",i+1,j+1);
		scanf("%d",&arr[i][j]);}
	} 
	printf("Ma tran %d x %d\n",n,n);
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
