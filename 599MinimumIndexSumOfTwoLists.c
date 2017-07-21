#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char *list1[] = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    char *list2[] = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};
    char **ans = (char**)malloc(4*sizeof(char*));
    int temp =2000;
    int s = 0;
    for(int i=0;i<4;i++) {
        for(int j = 0;j<4;j++) {
            if(strcmp(list1[i],list2[j])==0&&(i+j)<=temp) {
                ans[s]=list1[i];
                s++;
            }
        }
    }
    
    printf("%s",ans[0]);
    
    
    
    
    return 0;
}