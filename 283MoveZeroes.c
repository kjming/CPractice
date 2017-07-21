#include <stdio.h>
int main () {
    int s[] = {1,3,4,0,2};
    int size = 5;
    int index = 0;
    int temp=0;
    for(int i =0;i<size;i++) {
        if (s[i]!=0) {
            temp = s[index];
            s[index] = s[i];
            index++;
        }
    }
    
    for(index;index<size;index++) {
        s[index]=0;
    }
    for(int j =0;j<size;j++) {
    printf("%d ",s[j]);
    }
    
    return 0;
    
    
}

// #define swap(a, b) \
// 	do { \
// 		int __tmp = (a); \
// 		(a) = (b); \
// 		(b) = __tmp; \
// 	}while(0)

// void moveZeroes(int* nums, int numsSize) {
//     int ilp, prev;
// 	for (ilp = 0, prev = 0; ilp < numsSize; ilp++)
// 	{
// 		if (nums[prev] == 0 && nums[ilp])
// 		{
// 			swap(nums[prev], nums[ilp]);
// 			prev++;
// 		}
// 		else if (nums[prev] != 0)
// 			prev++;
// 	}
// }