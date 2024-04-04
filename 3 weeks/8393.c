#include <stdio.h>
int main() {

    int sum = 0, n;
    int count;
    scanf("%d", &n);
    for (count=1; count <= n; count++) {
        sum += count;
    }
    printf("%d", sum);

    return 0;
}