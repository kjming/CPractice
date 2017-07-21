#include <stdio.h>
int main() {
    char *s = "aa";
    int i=0;
    int k=0;
    int ans=0;
    int array[58]={0};
    while(s[i]!='\0') {
        
        ++array[s[i]-65];
        i++;
    }
    
    for(i = 0;i<58;i++) {
        ans+=array[i]/2;
        if(array[i]%2!=0) {
            k=1;
        }
    }
    ans=ans*2+k;
    printf("%d",ans);
    
    return 0;
    
}