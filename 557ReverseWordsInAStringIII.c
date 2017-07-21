#include <stdio.h>
#include <string.h>
void revers(int x,int y,char *s);
int main () {
    
    char s[] = "Let's take LeetCode contest";
    int len = strlen(s);
    int char_start = 0;
    char tmp;
    for(int i=0;i<=len;i++) {
        if((s[i]==' ')||(s[i]=='\0')) {
            revers(char_start,i-1,s);
            char_start = i+1;
        }   
        
    }
    printf("%s",s);
    return 0;
}

void revers(int x,int y,char *s) {
    char tmp;
    while(x<y) {
        tmp = s[x];
        s[x] = s[y];
        s[y] = tmp;
        x++;
        y--;
    } 
}