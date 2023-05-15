#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int even = 0, odd = 0, diff = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);

            if (x % 2 == 0) {
                even++;
            } else {
                odd++;
            }

        }

        if (even == odd) {
            printf("0\n");
        } else if (even > odd && (even - odd) % 2 == 0) {
            printf("%d\n", (even - odd) / 2);
        } else if (odd > even && (odd - even) % 2 == 0) {
            printf("%d\n", (odd - even) / 2);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
