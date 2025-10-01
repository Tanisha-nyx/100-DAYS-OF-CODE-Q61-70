#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count[10] = {0};

    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }

    int max_digit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[max_digit])
            max_digit = i;
    }

    printf("%d\n", max_digit);
    return 0;
}