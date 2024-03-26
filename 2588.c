#include <stdio.h>
int main() {

    int num1, num2;
    int a, b, c;
    scanf("%d %d", &num1, &num2);
    a = num2 % 10; //일의 자리 수
    b = ((num2 - a) % 100) / 10; //십의 자리 수
    c = (num2 -a - 10*b) / 100; // 백의 자리 수
    printf("%d\n", num1 * a);
    printf("%d\n", num1 * b);
    printf("%d\n", num1 * c);
    printf("%d\n", num1 * num2);

    return 0;
}