#include <stdio.h>
int main() {

    int hour, min, time;
    int a, b;
    scanf("%d %d %d", &hour, &min, &time);
    a = (hour + (min + time) / 60) % 24;            //a는 시간의 계산 값
    b = (min + time) % 60;                   //b는 분의 계산 값
    printf("%d %d", a, b);
    
    return 0;
}