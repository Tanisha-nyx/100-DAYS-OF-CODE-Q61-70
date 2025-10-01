#include <stdio.h>

int main() {
    int n, val;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &val);

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Not found\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}