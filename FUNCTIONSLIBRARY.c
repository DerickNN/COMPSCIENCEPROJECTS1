//A C PROGRAM TO CALL FUNCTIONS TO CALCULATE RATE FOR LIBRARY
#include <stdio.h>
int due(int rd, int dd){
    int z;
    z = rd - dd;
    return z;
}
int fine(int OD, int R){//OD = DAYS OVERDUE, R = RATE
    int f;//fineamount
    f = OD * R;
    return f;
}
int main() {
    int BI;//bookID
    int r;//returnDate
    int d;//dueDate
    int q;
    int e;
    
    printf("Enter the bookID: ");
    scanf("%d", &BI);
    
    printf("Enter the returnDate: ");
    scanf("%d", &r);
    
    printf("Enter the dueDate: ");
    scanf("%d", &d);
    
    q = due(r , d);
    printf("The days overdue are %d \n", q);
    
    if(q >= 1 && q <=7){
      e = fine(q , 20);
      printf("The amount payable is %d", e);
    }
    else if(q >= 8 && q <= 14){
      e = fine(q , 50);
      printf("The amount payable is %d", e);
    }
    else{
      e = fine(q , 100);
      printf("The amount payable is %d", e);
    }
    
    return 0;

}