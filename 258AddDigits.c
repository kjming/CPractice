#include<stdio.h>
int main() {
    int num = 118;
    int x=0;
    while(num>=10) {
        x = num%10;
        num=num/10+x;
    }
    printf("%d",num);
    return 0;
    
    // if(num%9==0&&num!=0) {
    //     printf("%d",9);
    // }else {
    //     printf("%d",num%9);
    // }
    
}