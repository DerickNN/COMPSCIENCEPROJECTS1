// BOOK C structures while prompting the user
#include <stdio.h>
#include <string.h>//strcpy

struct book{
    char Title[50];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} book1, book2;

int main() {
    
    printf("Enter the title of the book:");
    scanf("%s", &book1.Title);
    printf("Enter the author of the book:");
    scanf("%s", &book1.author);
    printf("Enter the publication year of the book:");
    scanf("%d", &book1.publication_year);
    printf("Enter the ISBN of the book:");
    scanf("%s", &book1.ISBN);
    printf("Enter the price of the book:");
    scanf("%d", &book1.price);
    
    
    printf("The title of the book is:%s\n",book1.Title);
    printf("The author of the book is:%s\n",book1.author);
    printf("The publication year of the book is:%d\n",book1.publication_year);
    printf("The ISBN of the book is:%s\n",book1.ISBN);
    printf("The price of the book is:%.2f\n",book1.price);
    return 0;
}