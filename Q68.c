#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}