#include <stdio.h>
int main() {
    char word[100] = {0};
    int alpha[26];
    int len = 0;
    int i, j;

    scanf("%s", word);

    for(i=0; i<26; i++)
        alpha[i] = -1;

    for(i=0; word[i] != 0; i++)
        len += 1;

    for(i=0; i<len; i++){
        for(j=0 ; j<26; j++){
            if((int)word[i] == 97+j){
                if(alpha[j] != -1)
                    continue;
                alpha[j] = i;
            }
        }
    }

    for(i=0; i<26; i++)
        printf("%d ", alpha[i]);

    return 0;
}