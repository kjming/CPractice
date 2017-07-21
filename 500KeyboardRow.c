#include <stdio.h>
int main() {
    int i=0;
    int x=1;
    char *array = "az";
    while(array[i]!='\0') {
        switch(array[i]) {
            case 'a':case's':case'd':
            x=x^2;
            break;
            case 'z':
            x=x^3;
            break;
            default:
            printf("Fail");
            break;
        }
        i++;
    }
    if((x!=2)|(x!=3)) {
        printf("%d",x);
    }else{
        printf("%s",array);
    }
    return 0;
}