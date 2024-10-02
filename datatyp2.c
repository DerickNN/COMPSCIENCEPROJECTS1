//VARIABLES AND DATA TYPES prompting the user
//preprocessor directive
#include <stdio.h> //scanf and printf

int main (){

    char a;//1byte
    char name[5];//5byte
    int age;//4byte
    float area;//4 or 8byte
    double salary;//8byte

    printf("Enter a character:", a);
    scanf("%c", &a);
    printf("Enter your name:", name);
    scanf("%s", &name);
    printf("Enter your age:", age);
    scanf("%d", &age);
    printf("Enter the area:", area);
    scanf("%f", &area);
    printf("Enter your salary:", salary);
    scanf("%f", &salary);
    return 0;
}
