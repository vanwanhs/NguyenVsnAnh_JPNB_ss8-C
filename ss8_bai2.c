#include <stdio.h>
int main() {
    int e;
    int i;
    int arr[5]={1,2,3,4,5};
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &e);
    for (i = 0; i < 5; i++) {
            if (arr[i] == e) {
                printf("Phan tu %d co trong mang\n",e);
                 return 0;
            } 
        }
	printf("Phan tu khong ton tai trong mang.\n");
    return 0;
}
