#include<stdio.h>
#include<string.h>

int main() {
    char *s = "abc";
    char *t = "abcd";
   // char *s = "ymbgaraibkfmvocpizdydugvalagaivdbfsfbepeyccqfepzvtpyxtbadkhmwmoswrcxnargtlswqemafandgkmydtimuzvjwxvl";
   // char *t = "qhxepbshlrhoecdaodgpousbzfcqjxulatciapuftffahhlmxbufgjuxstfjvljybfxnenlacmjqoymvamphpxnolwijwcecgwbcj";
    // int lent = strlen(t);
    // int lens =lent-1;
    // int c=0;

    // for(int i =0;i<strlen(t);i++) {
    //     c+=t[i];
    // }
    // for(int i = 0; i<strlen(s);i++) {
    //     c-=s[i];
    // }
    
    
    // for (int i=0;i<lens;i++) {
    //     for(int j=0;j<lent;j++) {
    //         if(s[i]=t[j]) {
    //             t[j]=t[lens-1];
    //             lent--;
    //           // break;
    //         }
    //     }
    // }
    int lens = strlen(s);
    int a=0;
    int b=0;
    int i=0;
    while (s[i])
    {
        a ^= s[i];
        b ^= t[i];
        i++;
    }
    b ^= t[i];

    printf("%d\n",lens);
    printf("%c",a^b);
    
    
    return 0;
}