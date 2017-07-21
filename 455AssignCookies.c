#include <stdio.h>
#include <stdlib.h>
    
int main() {
    
    int s[] = {11,22,33};
    int g[] = {1};
    int count =0;
    int gSize =1;
    int sSize =3;
    int i = gSize-1;
    int j = sSize-1;
    int cmp (const void *a,const void *b) {
        return *(int*)a-*(int*)b;
    }
    qsort(g,gSize,sizeof(int),cmp);
    qsort(s,sSize,sizeof(int),cmp);
    
    while (j>=0&&i>=0) {
        if(s[j]>=g[i]) {
            j--;
            i--;
            count++;
        }else {
            i--;
        }
    }
    
    printf("%d",count);
    
    return 0;
    
}
    
    