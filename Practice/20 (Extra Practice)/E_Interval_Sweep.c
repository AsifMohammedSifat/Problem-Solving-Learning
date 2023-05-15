#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0) {
        printf("NO\n");
    } else {
        int diff = a - b;
        if (diff < 0) {
            diff = -diff;
        }
        if (diff <= 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
