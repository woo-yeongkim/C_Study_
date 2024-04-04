#include <stdio.h>
int main() {

    int i, j;        
    int a, b;
    scanf("%d", &i);
    for (j=1; j<=i; j++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n",j , a, b, a+b);
    }

    return 0;
}