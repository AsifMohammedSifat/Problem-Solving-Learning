#include <stdio.h>

int main() {
    int n, a[1005], count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] + 1 == a[j]) {
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
