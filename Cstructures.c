// C structures 
#include <stdio.h>
#include <string.h>//strcpy
struct Student{
    char name[20];
    char reg_no[20];
    char email[30];
    int ID;
    int phone;
    float Marks;
    
} student1, student2;
int main() {
    //struct Student student1, student2;
    //initialization of the variables
    strcpy(student1.name, "Oprah");
    strcpy(student1.reg_no, "BCS-003-0010/2024");
    strcpy(student1.email, "oprah@gmail.com");
    student1.ID = 35743657;
    student1.phone = 719426982;
    student1.Marks = 70.5;
    
    printf("name: %s\n", student1.name);
    printf("Reg N0: %s\n", student1.reg_no);
    printf("Email: %s\n", student1.email);
    printf("ID: %d\n", student1.ID);
    printf("phone: %d\n", student1.phone);
    printf("Marks: %.1f", student1.Marks);

    return 0;
}