#include <stdio.h>

int main () {
    int mNumberArray[] = {1,2,345,2,24,-1,23,531,3,531,-13,321,4,-123,-42,123,111111};
    int mSize = 3;
    double mSum = 0;
    double mTemp = 0;
    double mTempSum = 0;
    for (int i = 0;i<mSize;i++ ) {
        mSum +=mNumberArray[i]; 
    }
    
    printf("%0.2f\n",mSum);
    
    mTemp = mSum;
    
    for(int i = mSize;i<17;i++) {
        mSum = mSum + mNumberArray[i]-mNumberArray[i-mSize];
        if(mSum>mTemp) {
            mTemp=mSum;
        }    
    }
    printf("%0.2f\n",mTemp);
    return 0;
}