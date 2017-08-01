#include <stdio.h>
#include <string.h>
int main() {
    
    char *String = "faaaadbbbz";
    int alphabet[26] ={};
    int len = 0;
    int num = 0;
    int ans = -1;
    int i = 0;
    len = strlen (String);
    
    for(i = 0;i<len;i++) {
        num = String[i]-'a';
        // printf("%d ",num);
        alphabet[num] = alphabet[num]+1;
    }
    // printf("\n i : %d\n ",i);
    // for(i = 0; i <26 ;i++) {
    //     // printf(" i %d ",i);
    //     printf("%d ",alphabet[i]);
    // }
    
    for(i = 0 ;i<len ; i++) {
        num = String[i] -'a';
        if(alphabet[num]==1) {
            ans = i;
            break;
        }
    }
    printf ("\nans : %d\n",ans);


    
   return 0;
}

    // int arr[26] = {0};
    // int len = strlen(s);
    // for(int i=0; i<len; i++ ){
    //     arr[s[i]-'a']++;
    // }
    // for(int i=0; i<len;i++){
    //     if(arr[s[i]-'a']==1) return i;
    // }
    // return -1;