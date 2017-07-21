#include <stdio.h>
#include <stdlib.h>
int main() {
    int size = 10;
    int *ansPtr =(int*)malloc(size*sizeof(int));
    int array[1] = {1};
    int array2[1] = {1};
    int startN = 0;
    int endN = 0;
    int Temp = -1;
    int s =0;
    int index;
    int cmp (const void* a,const void* b) {
        return *(int*)a-*(int*)b;
    }
    qsort(array,1,sizeof(int),cmp);
    qsort(array2,1,sizeof(int),cmp);
    
                printf("temp %d\n",array[1]);
    for(int i =0;i<1;i++) {
        startN = 0;
        endN = 0;
        if (array[i]!=Temp) {
            Temp = array[i];

            // printf("startN %d\n",startN);
            // printf("endN %d\n",endN);
            
            do {
                // printf("------------startN %d\n",startN);
                // printf("--------------endN %d\n",endN);
                index = (startN+endN)/2;
                // printf("index %d\n",index);
                if(array2[index]==array[i]) {
                  ansPtr[s]=array[i];

                  s++;
                  startN = endN;

                 // printf("%d",ansPtr[s-1]);
                }else if(array2[index]>array[i]) {
                    endN = index;
                   // printf("%d",endN);
                }else {
                    startN =index;
                    
                }
            // printf("%d ",startN);
            // printf("%d ",endN);
                
            }while(endN-startN>0);
            
        }
        
    }
    for(int i =0;i<10;i++) {
        printf("%d\n",ansPtr[i]);
    }
    
    
    
    return 0;
}


//Leetcode
// int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//     int resultSize = nums1Size < nums2Size ? nums1Size : nums2Size;
//     int size = nums1Size > nums2Size ? nums1Size : nums2Size;
//     int *ansPtr =(int*)malloc(resultSize*sizeof(int));
//     int startN = 0;
//     int endN = 0;
//     int Temp = -1;
//     int s =0;
//     int *found;
//     int cmp (const void* a,const void* b) {
//         return *(int*)a-*(int*)b;
//     }
//     qsort(nums1,nums1Size,sizeof(int),cmp);
//     qsort(nums2,nums2Size,sizeof(int),cmp);
//     for(int i =0;i<nums1Size;i++) {
//         startN = 0;
//         endN = nums2Size;
//         if (nums1[i]!=Temp) {
//             Temp = nums1[i];
//             found = bsearch(&nums1[i], nums2, nums2Size, sizeof(int), cmp);
//             if(found!=NULL) {
//                 ansPtr[s]=nums1[i];
//                 s++;
//             }
            
//         }
        
//     }
//     ansPtr[s] ='\0';
//     *returnSize = s;
//     return ansPtr;
// }