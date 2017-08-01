#include <stdio.h>
#include <stdlib.h>
int main () {
    int number[8] = {4,3,2,7,8,2,3,1};
    int *nums =number; 
    int numsSize = 8;
    int *returnSize;
    // printf("%d",*(nums+1));
    int *ans = NULL;
    int i = 0;
    int index = 0;
    ans = (int*)malloc(sizeof(int)*numsSize);
    for (i =0 ; i<numsSize;i++) {
        if(nums[abs(nums[i])-1]>0) {
            nums[abs(nums[i])-1] = nums[abs(nums[i])-1] *(-1);
        }
        
    }
    for(i =0 ; i<numsSize;i++) {
        printf("%d ",nums[i]);
    }
    for (i =0 ; i<numsSize;i++) {
        if(nums[i]>0) {
            ans[index] = i+1;
            index++;
        }
    }
    ans[index+1] ='\0';
    i=0;
    while(ans[i]!='\0') {
        printf("\nans %d\n",ans[i]);
        i++;
    }
    
}

    // for(int i=0;i<n;i++) {
    //     nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
    // }
    
    // int c = 0;
    // for(int i=0;i<n;i++) 
    //     if(nums[i] > 0) c++;
    
    // int* r = (int*) malloc (c * sizeof(int));
    // *rs = c;

    // for(int i=0,j=0;i<n;i++) {
    //     if(nums[i] > 0) 
    //         r[j++] = i+1;
    // }

    // return r;