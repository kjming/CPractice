#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char *s = "A";
    int sum =0;
    int i=0;
    int len = strlen(s)-1;
    for(i;i<strlen(s);i++) {
        sum += (s[i]-64)*pow(26,1);
        len--;
    }
    printf("%d",sum);
    return 0;
}