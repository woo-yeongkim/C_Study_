#include <stdio.h>
int main() {
    int arr[1000000];
    int i, n;

    scanf("%d", &n);

    for (i=0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    int min = arr[0];

    for (i=0; i < n; i++){
        if(max<arr[i])
            max = arr[i];
        if(min>arr[i])
            min = arr[i];
    }

    printf("%d %d", min, max);
    
    return 0;
}