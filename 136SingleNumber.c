#include<stdio.h>
int main () {
    int nums[1] ={1};
    int size =1;
    int x=0;
    for(int i =0;i<size;i++){
        x=x^nums[i];
    }
    printf("%d",x);
    
    
    // int size = 1;
    // int x=0;
    // int ans=0;
    
    // for(int i = 0;i<size;i++) {
    //     for(int j=0;j<size;j++) {
            
    //         if(nums[i]==nums[j]) {
    //             x++;
    //         }

            
    //     }
    //     if(x!=2) {
    //         ans=nums[i];            
    //     }
    //     x=0;

    // }
    //     printf("%d",ans);
    return 0;
    
    
}