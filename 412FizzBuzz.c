#include <stdio.h>
int main() {
    int n=15;
    char **ans = (char**)malloc(n*sizeof(char*));
    for(int i = 0;i<n;i++) {
        ans[i] = (char*)malloc(10*sizeof(char));
    }
    
    for(int i =1;i<=n;i++) {
        if((i%3==0)&&(i%5!=0)){
            ans[i-1]="aa\0";
        }else if(i%5==0&&i%3!=0) {
            ans[i-1]="bb\0";
        }else if(i%3==0&&i%5==0) {
            ans[i-1]="cc\0";
        }else {
           sprintf(ans[i-1],"%d",i);
            // intToChar(i,ans[i-1]);
        }
    }
    for (int i=0;i<n;i++) {
            printf("%s ",ans[i]);
    }
    return 0;
    
    
    
    
}