#include <stdio.h>
int main() {
    int n=2048;
    int count=0;
    while(n>0) {
        //if(n&1==1) {
            count+=n&1;
        //}
        n>>=1;
    }
    printf("%d",count);
    return 0;
}