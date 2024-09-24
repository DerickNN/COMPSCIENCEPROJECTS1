//A PROGRAM TO CALCULATE THE FINE FOR OVERDUE LIBRARY BOOKS
//DERICK NGURURI
//BCS-03-0010/2024

#include<stdio.h>

int main(){
    int BI;//bookID
    int RD;//returnDate
    int DD;//dueDate
    int OD;//daysOverdue
    int FA;//fineAmount,
    
    printf("Enter the bookID: ");
    scanf("%d", &BI);
    
    printf("Enter the returnDate: ");
    scanf("%d", &RD);
    
    printf("Enter the dueDate: ");
    scanf("%d", &DD);
    
    OD = RD - DD;
    printf("The days overdue are %d \n", OD);
    
    if(OD >= 1 && OD <=7){
        int R = 20;//fineRate
        FA = OD * R;
        printf("The amount payable is %d", FA);
    }
    else if(OD >= 8 && OD <= 14){
        int R = 50;//fineRate
        FA = OD * R;
        printf("The amount payable is %d", FA);  
    }
    else{
        int R = 100;//fineRate
        FA = OD * R;
        printf("The amount payable is %d", FA);   
    }
    
    return 0;
}