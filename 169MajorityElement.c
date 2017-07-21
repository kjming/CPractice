#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[20] = {1,1,1,1,1,1,1,1,1,1,1,2,24,5,6,6,7,1,4,5};
    int numsSize =20;
    
    int cmp(const void*a,const void*b) {
        return *(int*)a-*(int*)b;
    }
    qsort(nums,numsSize,sizeof(int),cmp);
    
    
    
    
    printf("%d",nums[numsSize/2]);
    return 0;
}