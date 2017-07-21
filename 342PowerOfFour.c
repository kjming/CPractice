#include <stdio.h>
int main() {
    
    int num= 4;
    int y= (num > 0) && ((num & (num - 1)) == 0) && ((num & 0x55555555) == num);
    printf("%d",y);
    return 0;
    
}