//VARIABLES AND DATA TYPES
//preprocessor directive
#include <stdio.h> //scanf and printf

int main (){

    char a = 'K';//declaration and initilization %c
    char name[] ="keith"; //%s
    int h = 10;//0-9
    float area = 2.035;
    double salary = 2000.50;

    printf("The character is %c \n", a);
    printf("The string is %s \n", name);
    printf("The integer is %d \n", h);
    printf("The float is %.2f \n", area);
    printf("The double is %.4f \n", salary);
    return 0;
}
