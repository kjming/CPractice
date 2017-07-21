#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *ransomNote = "abcde";
    char *magazine ="aabbccdd";
    int SransomNote = strlen(ransomNote);
    int Smagazine =strlen(magazine);
    int array[26] ={0};
    int k=0;
    for(int i = 0;i<Smagazine;i++) {
        k=magazine[i]-'a';
        array[k] +=1;
    }
    for(int i=0;i<SransomNote;i++) {
        k=ransomNote[i]-'a';
        array[k] -=1;
        
        if (array[k]<0) {
            printf("%s","false");
            return 0;
        }
        
    }
    printf("%s","true");    
    
    // for(int j=0;j<26;j++) {
    //     printf("%d ",array[j]);
    // }
    // for (int i='a';i<='z';i++) {
    //     printf("%d\n",i-'a');
    // }
    
    return 0;

}