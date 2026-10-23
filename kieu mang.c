#include <stdio.h>
int main() {
    int A[] = {5, 7, 6, 9, 10, 12, -3, 4, 1, 8};    
    printf("Cac phan tu cua mang la: \n");
    int n = sizeof(A) / sizeof(A[0]);
	 for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }		
    printf("\n\n");
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += A[i]; 
    }
    printf("Tong cac phan tu trong mang la: %d\n\n", tong);
    int dem_am = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            dem_am++;
        }
    }
    printf("So phan tu am trong mang la: %d\n\n", dem_am);
    int co_so_0 = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            co_so_0 = 1;
            break;
        }
    } 
    if (co_so_0 == 1) {
        printf("Mang CO ton tai so 0.\n\n");
    } else {
        printf("Mang KHONG ton tai so 0.\n\n");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                int tam = A[i];
                A[i] = A[j];
                A[j] = tam;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}