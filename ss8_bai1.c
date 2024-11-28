#include<stdio.h>
int main(){
	int array[3][4]={{2,3,4,5},{1,2,3,4},{9,8,7,6}};
	int i,j;
	printf("Mang hai chieu cua bai:\n");
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf("%d\n",array[i][j]);
		}
	}
	
	return 0;
}
