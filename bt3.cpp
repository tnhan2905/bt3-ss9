#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, pos;
    printf("Nhap so phan tu (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &pos);
    if (pos >= 0 && pos < n) {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
