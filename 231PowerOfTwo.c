#include <stdio.h>

int main() {
    
    int n=16;
    int ans =0;
    ans = (n>0)&&(n&(n-1))==0;
    printf("%d",ans);
    return 0;
}

// bool isPowerOfTwo(int n) {
//     int one = 0;
//     if( n <= 0 ) return false;
    
//     while( n != 0 )
//     {
//         if( n & (1<<0) ) one++;
        
//         if( one > 1 ) return false;
        
//         n = n>>1;
//     }
    
//     return true;
// }