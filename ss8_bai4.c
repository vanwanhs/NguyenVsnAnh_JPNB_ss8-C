#include<stdio.h>
int main(){
	int arr[3][3]={{1,10000,3},{4,3000000,6},{7,8,9}};
//	int i,j;
	int n;
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
				if(n<arr[i][j]){
					n=arr[i][j];
				}
			}
		}
		printf("Phan tu %d lon nhat trong mang",n);
    return 0;
}
