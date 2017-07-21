#include <stdio.h>
int main () {
    int nums[2] = {0,2};
    int numsSize =2;
    
    int k;
    k= (numsSize+1)*numsSize/2;
    
    for(int i=0;i<numsSize;i++) {
        k-=nums[i];
    }   
    printf("%d",k);
    return 0;
    
    
}