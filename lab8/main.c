#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define STRLEN 200

int compareYears(const void *a, const void *b);

struct book{
    char author[30];
    char book[50];
    int year;
    char pages[10];
    char price[10];
} book;

int main() {
    int i = 0;
    char str[100];
    char* pw;
    struct book books[32];
    FILE* file;
    file = fopen("books.txt", "r");
    while(!feof(file)){
        fgets(str, STRLEN, file);
        pw = strtok(str, "\t");
        strcpy(books[i].author, pw);
        pw = strtok(NULL, "\t");
        strcpy(books[i].book, pw);
        pw = strtok(NULL, "\t");
        books[i].year = atoi(pw);
        pw = strtok(NULL, "\t");
        strcpy(books[i].pages, pw);
        pw = strtok(NULL, "\t");
        strcpy(books[i].price, pw);
        ++i;
    }
    printf("List of all books before sorting:\n");
    printf("  Author\t\t\tBook\t\t\tYear\t\tPages\t\tPrice\n"
           "-------------------------------------------------------------------------------------------------\n");

     for(int j = 0; j < i; ++j){
         printf("%-s\t%-s\t\t%-d\t\t%-s\t\t%-s", books[j].author, books[j].book, books[j].year, books[j].pages, books[j].price);
     }

    qsort(books, i, sizeof(book), compareYears);

    printf("\n\nList of all books after sorting:\n");
    printf("  Author\t\t\tBook\t\t\tYear\t\tPages\t\tPrice\n"
           "-------------------------------------------------------------------------------------------------\n");


    for(int j = 0; j < i; ++j){
        printf("%-s\t%-s\t\t%-d\t\t%-s\t\t%-s", books[j].author, books[j].book, books[j].year, books[j].pages, books[j].price);
        if((strchr((books[j].price), '\n')) == NULL){
            printf("\n");
        }
    }

    printf("\nList of books starting with A:\n");
    printf("  Author\t\t\tBook\t\t\tYear\t\tPages\t\tPrice\n"
           "-------------------------------------------------------------------------------------------------\n");
    for(int j = 0; j < i; ++j){
        if(strncmp((books[j].book), "A", 1) == 0){
            printf("%-s\t%-s\t\t%-d\t\t%-s\t\t%-s", books[j].author, books[j].book, books[j].year, books[j].pages, books[j].price);
            if((strchr((books[j].price), '\n')) == NULL){
                printf("\n");
            }
        }
    }

    _getch();
    return 0;
}


int compareYears(const void *a, const void *b)
{
    const struct book *bookA = a;
    const struct book *bookB = b;

    return bookB->year - bookA->year;
}

