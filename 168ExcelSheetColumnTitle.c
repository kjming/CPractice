#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int s[]={};
    int num =25;
    while(num>26) {
        s[0]=(num%26+64);
    }
    printf("%s",s);
    return 0;
}