#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int i, j, a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i += k) {
        int min = a[i];
        for (j = i + 1; j < n && j < i + k; j++) {
            if (a[j] < min) {
                min = a[j];
            }
        }
        printf("%d ", min);
    }

    printf("\n");
    return 0;
}
