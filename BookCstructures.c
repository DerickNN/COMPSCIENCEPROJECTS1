// BOOK C structures
#include <stdio.h>
#include <string.h>//strcpy

struct book{
    char Title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} book1, book2;

int main() {
    strcpy(book1.Title, "Introduction to C programming");
    strcpy(book1.author, "John Smith");
    book1.publication_year = 2022;
    strcpy(book1.ISBN, "9780131103627");
    book1.price = 49.99;
    
    printf("The title of the book is:%s\n",book1.Title);
    printf("The author of the book is:%s\n",book1.author);
    printf("The publication year of the book is:%d\n",book1.publication_year);
    printf("The ISBN of the book is:%s\n",book1.ISBN);
    printf("The price of the book is:%.2f\n",book1.price);
    return 0;
}