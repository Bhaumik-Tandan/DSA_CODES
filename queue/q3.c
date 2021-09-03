#include<stdio.h>
#include<stdbool.h>
typedef struct 
{
    char* title;
    long accession_number;
    bool tag;
}book;

typedef struct 
{
    char* name;
    long borrower_number;
    book* list_of_books;
}subscriber;

main()
{
    
}
