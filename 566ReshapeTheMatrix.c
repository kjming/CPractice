#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[2][2]={{1,5},{23,2}};
    int iRow=2;
    int iCol=2;
    int row=1;
    int col=4;
    
    if(iRow*iCol!=row*col) {
        row = iRow;
        col = iCol;
    }
    
    int **rowPter = (int**)malloc(row*sizeof(int*));
    for (int i =0;i<row;i++) {
        rowPter[i]=(int*)malloc(col*sizeof(int));
    }
    
    for (int i =0;i<iRow*iCol;i++) {
        rowPter[i/col][i%col]=array[i/iCol][i%iCol];
    }
    
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++){
            printf("%d ",rowPter[i][j]);
        }
    }
    return 0;
}