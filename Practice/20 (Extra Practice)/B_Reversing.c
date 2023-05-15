#include <stdio.h>

int main() {
    int n, a[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] == 0) {
            for (int j = i - 1, k = 0; j >= 0 && j > k; j--, k++) {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
