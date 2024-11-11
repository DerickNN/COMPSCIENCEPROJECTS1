// ARRAY DATA STRUCTURE - A data structure that collects elements of the same data type and stores them in contiguous and adjacent memory locations.
//A C PROGRAM FOR 2D ARRAY
#include <stdio.h>

int main() {
    
    int i;
    int j;
    int scores[2][2] = {{35,70},{59,67}};
    
    for(i=0; i<2;  i++){
        for(j=0; j<2; j++){
        printf("scores[%d] [%d] = %d \n",i,j, scores[i][j]);
        }
    }
    
    
    return 0;
}
