#include <stdio.h>
int getSum(int a ,int b);
int main() {
    int mSum =0;
    mSum = getSum(10,12);
    printf("%d",mSum);
    return 0;
}

int getSum(int a, int b) {
    if (b)
	    return getSum(a ^ b, (a & b) << 1);
	else
	    return a;
}