#include <stdio.h>
#include <math.h>
int main() {
    int num =-100;
    // int ans = 0;
    // int n=0;
    // char buffer[20];
    // while (num>0) {
    //     ans+=num%7;
    //     num=num/7;
    //     n++;
    // }
    // sprintf(buffer,"%d",ans);
    // printf("%s",buffer);
    
    static char buf[0x11];
    char *p = buf+0x10;
    // for(int i = 0x00;i<0x11;i++)
    //     printf("%p\n",p-i);
    if (num >= 0)
    {
        *--p =   (num % 7)+'0';
        while (0 != (num /= 7))
            *--p = (num % 7)+'0';
    }
    else
    {
        *--p = '0' - (num % 7);
        while (0 != (num /= 7))
            *--p = '0' - (num % 7);
        *--p = '-';
    }
    printf("%s",p);

    return 0;
}