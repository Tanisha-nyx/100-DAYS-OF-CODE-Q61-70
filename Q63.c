#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[100];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    int arr2[100];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[200];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d\n", merged[i]);
    }

    return 0;
}