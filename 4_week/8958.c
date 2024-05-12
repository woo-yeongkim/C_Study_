#include <stdio.h>

int main() {
    int n;
    int i,j,k = 1;
    int sum, len;
    char test[80] = {0};

    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%s", test);

        sum = 0;
        len = 0;
        k = 1;

        for(j=0; test[j] != 0; j++)
            len += 1;

        for(j=0; j<len; j++){
            if(test[j] == 'O'){
                sum += k;
                k++;
            }
            else{
                k=1;
            }
        }

        printf("%d\n", sum);
    }
     
    return 0;
}