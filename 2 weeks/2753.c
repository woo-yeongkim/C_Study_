#include <stdio.h>
int main() {
    
    int years;
    scanf("%d", &years);
    
    if ((years % 400 == 0) || (years % 4 == 0 && years % 100 != 0)) 
    {
        printf("%d\n", 1);
    }
    else 
    {
        printf("%d\n", 0);
    }
    
    return 0;
}