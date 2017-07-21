#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char *num1 ="50000";
    char *num2 = "50000";
    // char *sum =(char*)malloc(6*sizeof(char));
    // char temp=0;
    // int k=5;
    // int j=strlen(num1)-1,i=strlen(num2)-1;
    // while(1) {
        
    //     sum[k]=num1[j]+num2[i]+temp-48;
    //     if(sum[k]>57) {
    //         sum[k]=sum[k]-10;
    //         temp=1;
    //     }else{
    //         temp=0;
    //     }
    //     k--;
    //     j--;
    //     i--;
        

    //     if(i<0||j<0){
    //         break;
    //     }    
    // }
    
    // if(j>i){
    //     while(1) {
    //         sum[k]=num1[j]+temp;
    //         if(sum[k]>57) {
    //             sum[k]=sum[k]-10;
    //             temp=1;
    //         }else{
    //             temp=0;
    //         }
    //         j--;
    //         k--;
    //         if(j<-1)
    //             break;
    //     }
    // }else  {
    //     while(1) {
    //         sum[k]=num2[i]+temp;
    //         if(sum[k]>57) {
    //             sum[k]=sum[k]-10;
    //             temp=1;
    //         }else{
    //             temp=0;
    //         }
    //         i--;
    //         k--;
    //         if(i<-1)
    //             break;
    //     }
    // }
    // if(temp=1) {
    //     sum[0]=1;
    // }

    //     printf("%s",sum);
    ^^^^^^^^^^^^^^^^^^^^^^^^^lot of bug^^^^^^^^^^^^^^^^^^^^

    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxlen = len1 > len2 ? len1 : len2;
    char* res = (char*)malloc((maxlen+2)*sizeof(char));
    res[maxlen+1] = '\0';
    int carry = 0;
    --len1; --len2;
    while(len1 >= 0 || len2 >= 0) {
        int temp;
        if(len1 >= 0 && len2 >= 0)
            temp = num1[len1--] - '0' + num2[len2--] - '0' + carry;
        else if(len1 >= 0 && len2 < 0)
            temp = num1[len1--] - '0' + carry;
        else
            temp = num2[len2--] - '0' + carry;
        res[maxlen--] = temp % 10 + '0';
        carry = temp / 10;
    }

    if(carry) {
        res[0] = '1';
        printf("%s",res);
    }
    printf("%s",res+1);
    
    
    return 0;
}