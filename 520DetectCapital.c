#include <stdio.h>
#include <ctype.h>
int main() {
    char *word = "Aaa";
    if(isupper(word[1])==0) {
        for(int i=2;i<strlen(word);i++) {
            if(isupper(word[i])!=0) {
                printf("%s","false");
                return 0;
            }
        }
        printf("%s","true");
    }else {
        for(int i=0;i<strlen(word);i++) {
            if(isupper(word[i])==0) {
                printf("%s","false");
                return 0;
            }
        }
        printf("%s","true");
    }

    return 0;
}