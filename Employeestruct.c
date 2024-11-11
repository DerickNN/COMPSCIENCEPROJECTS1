// A C PROGRAM TO DEFINE A STRUCTURED NAMED EMPLOYEE
#include<stdio.h>
#include<string.h>

struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
	
}employee1, employee2;

int main(){
	strcpy(employee1.name, "John Doe");
	employee1.id = 12345;
    strcpy(employee1.department, "Human Resources");
    employee1.salary = 55000.50;
    strcpy(employee1.email, "john.doe@company.com");
    
    
    printf("Name: %s\n", employee1.name);
    printf("Id: %d\n", employee1.id);
    printf("Department: %s\n", employee1.department);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Email: %s\n", employee1.email);
    
    
    
    return 0;
}
