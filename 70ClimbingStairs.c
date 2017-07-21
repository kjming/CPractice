#include <stdio.h>
int main() {
    int n = 5;
    
    int ans = 1;
    int tempA = 0;
    int tempB =0;
    
    for(int i = 0;i<n;i++) {
        tempB = tempA;
        tempA = ans;
        ans =tempA+tempB;
    }
    
    printf("%d",ans);
    return 0;
}