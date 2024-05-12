#include <stdio.h>
int main() {
    int i, j;
    int max, n;
    int score[4] = {0};
    int total[5] = {0};

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            scanf("%d", &score[j]);
            total[i] += score[j];
        } 
    }

    max = total[0];
    n = 1;

    for(i=0; i<5; i++){
        if(max<total[i]){
            max = total[i];
            n = i+1;
        }
    }

    printf("%d %d\n", n, max);

    return 0;
}