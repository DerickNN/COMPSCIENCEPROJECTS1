// C structures prompting the user to enter the data
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
    
    printf("Enter the name of the student:");
    scanf("%s", &student1.name);
    printf("Enter the registration number of the student:");
    scanf("%s", &student1.reg_no);
    printf("Enter the email of the student:");
    scanf("%s", &student1.email);
    printf("Enter the ID of the student:");
    scanf("%d", &student1.ID);
    printf("Enter the phone number of the student:");
    scanf("%d", &student1.phone);
    printf("Enter the marks of the student:");
    scanf("%f", &student1.Marks);
    
    
    printf("name: %s\n", student1.name);
    printf("Reg N0: %s\n", student1.reg_no);
    printf("Email: %s\n", student1.email);
    printf("ID: %d\n", student1.ID);
    printf("phone: %d\n", student1.phone);
    printf("Marks: %.1f", student1.Marks);

    return 0;
}