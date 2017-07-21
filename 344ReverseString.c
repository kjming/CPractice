#include <stdio.h>
#include <string.h>
void revers(int x,int y,char *s);
int main () {
    
    char s[] = "Hello";
    char tmp;
    int len = strlen(s)-1;
    int i=0;
    while(i<len) {
        tmp = s[i];
        s[i] = s[len];
        s[len]=tmp;
        i++;
        len--;
    }
    printf("%s",s);
    return 0;
}
