#include <stdio.h>
int main() {
    int nums[4] ={1,1,1,1};
    int numsSize=4;
    int count=0;
    int ans =0;
    for(int i = 0;i<numsSize;i++) {
        if(nums[i]==1) {
            count+=1;
            if(count>ans) ans=count;
        }else {
            count=0;
        }
    }
    printf("%d\n",ans);
    return 0;
}
    
    
    
   