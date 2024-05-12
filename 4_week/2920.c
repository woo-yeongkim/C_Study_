#include <stdio.h>
int main() {
    int scale[8];
    int num = 0;

    for(int i=0; i<8; i++)
        scanf("%d", &scale[i]);

    for(int i=0; i<8; i++) {
        if(scale[i] == i+1)
            num += 1;
        else if (scale[i] == 8-i)
            num += -1;
    }

    if(num == 8)
        printf("ascending");
    else if(num == -8)
        printf("descending");
    else
        printf("mixed");

    return 0;
}