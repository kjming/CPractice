#include <stdio.h>
#include <stdlib.h>
int distributeCandies(int* candies, int candiesSize);
int main() {
    int array[6]={31,41,51,1,1,1};
    printf("%d",distributeCandies(array,6));
    
}

int distributeCandies(int* candies, int candiesSize) {
    int count = 1;
    int cmp(const void *a,const void *b) {
        return (*(int*)a-*(int*)b); 
    }
    qsort(candies,candiesSize,sizeof(int),cmp);

    
    for(int i=0;i<candiesSize-1;i++) {
       // printf("%d",i);
        //printf("%d,",candies[i]);
        if(candies[i]!=candies[i+1]) {
            ++count;
           // printf("\ncount %d\n",count);
        }
    }
   // printf("\n%d\n",(candiesSize/2));
   // printf("%d\n",count);
    
    if(count>=(candiesSize/2)) {
        printf("\nA\n");
        return (candiesSize/2);
    }else {
        printf("\nB\n");
        return count;
    }
    
    //count>=(candiesSize/2)? return (candiesSize/2):return count;
}