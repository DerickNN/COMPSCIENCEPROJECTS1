// C ARRAYS = 2D
#include <stdio.h>

int main() {
    
    int i;
    int j;
    int marks[2][3] = {{1,2,7},{6,8,9}};
    
    for(i=0; i<2;  i++){
        for(j=0; j<3; j++){
        printf("marks[%d] [%d] = %d \n",i,j, marks[i][j]);
        }
    }
    
    
    return 0;
}