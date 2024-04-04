#include <stdio.h>
int main() {

    int total;
    int n, a, b;
    int sum =0;
    scanf("%d", &total);
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        sum += a*b;
    }
    if ( sum == total) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}