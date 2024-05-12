#include <stdio.h>
int main() {
    int a[9];
    int i,num,max;

    for (i=0; i<9; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    num = 1;              // 최댓값이 a[0]일 경우 아래 if문이 실행되지 않기 때문에 num에 1 대입

    for (i=0; i<9; i++) {
        if(max<a[i]){
            max = a[i];
            num = i+1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", num);

    return 0;
}