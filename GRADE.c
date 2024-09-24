//A PROGRAM TO CALCULATE THE AVERAGE OF THREE SUBJECTS FOR STUDENTS
//DERICK NGURURI
//BCS-O3-0010/2024

#include<stdio.h>

int main(){
    
    int M;//math subject
    int E;//English subjet
    int B;//Biology subject
    float A;//Average
    
    printf("Enter the marks for Math: ");
    scanf("%d", &M);
    
    printf("Enter the marks for English: ");
    scanf("%d", &E);
    
    printf("Enter the marks for Biology: ");
    scanf("%d", &B);
    
    A = (M + E + B) / 3;
    printf("The average of the three subjects is:%f \n", A);
    
    if(A >= 70 && A <= 100){
        printf("A");
    }
    else if(A >= 60 && A <= 69){
        printf("B");
    }
    else if(A >= 50 && A <= 59){
        printf("C");
    }
    else if(A >= 40 && A <= 49){
        printf("D");
    }
    else{
        printf("E(FAIL)");
    }
    
    return 0;
}