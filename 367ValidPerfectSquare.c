#include <stdio.h>
void method1 (int num);
void method2 (int num);
int main () {
    int num = 895745041;
    method1(num);
    method2(num);
    return 0;
}

void method1 (int num) {
    int start = 0;
    int end = num;
    int temp=0;

   // printf("%d\n",end);
   // printf("%d\n",start);
    if (num>=46340) {
        end = 46340;
    }
    if (num ==1) {
        printf("method1 %d\n",num);
    }
    while ((end-start)>1) {
        temp=(start+end)/2;
        if((temp*temp)==num) {
            printf("method1 %d\n",temp);
            break;
        }else if ((temp+1)*(temp+1)==num) {
            printf("method1 %d\n",temp+1);
            break;
        }else if((temp*temp)>=num) {
            end = temp ;
       // printf("end %d\n",end);
        }else {
            start =temp;
       // printf("start %d\n",start);
        }
    }
}

void method2 (int num) {
    int output = 0;
    int count = 0;
    while(++count)
    {
        if((num / count) == count && (num % count) == 0)
        {
            output = count;
            printf("method2 %d", output);
        }
        if((num / count) < count)
        {
            break;
        }
    }    
    
}