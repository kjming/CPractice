#include <stdio.h>
#include <stdlib.h>


int main() {
    int nums[] ={1,3,45,56,2,24,1};
    int size =7;
    
    int cmp(const void *a,const void *b) {
        return *(int*)a-*(int*)b;
    }
    
    qsort(nums,size,sizeof(int),cmp);
    
    for(int i = 0;i<size-1;i++) {
        if(nums[i]==nums[i+1]) {
            printf("%s","true");
        }
    }
    
    return 0;

    
}


// bool containsDuplicate(int* nums, int numsSize) {
//     int i;
//     int j;
//     int temp;
// 	bool sorted;

//     if(numsSize == 0)
//         return false;
//     if(numsSize == 1)
//         return false;
//     //for(i=1; i<numsSize; i++){
//     //    for(j=0; j<i; j++){
//     //        if(nums[i] == nums[j]){
//     //            return true;
//     //        }
//     //    }
//     //}
//     //
//     //return false;

// 	for(i=numsSize-1; i>=0 ; i--){
// 		sorted =true;
// 		for(j=0; j<i; j++){
// 			if(nums[j] == nums[j+1]){
// 				return true;
// 			}
// 			else if(nums[j] > nums[j+1]){
// 				temp = nums[j+1];
// 				nums[j+1] = nums[j];
// 				nums[j] = temp;
// 				sorted = false;
// 			}
// 		}
// 		if(sorted) break;
// 	}
// 	return false;
// }