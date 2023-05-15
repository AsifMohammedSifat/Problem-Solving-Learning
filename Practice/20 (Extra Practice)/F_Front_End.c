#include <stdio.h>

#define MAX_N 100000

int a[MAX_N];

int main() {
    int n, i, front, end;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    front = 0;
    end = n - 1;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", a[front]);
            front++;
        } else {
            printf("%d ", a[end]);
            end--;
        }
    }
    printf("\n");
    return 0;
}
