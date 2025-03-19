#include <stdio.h>
#include <stdlib.h>

struct author {
    char name[50];
    int age;
};

struct book {
    char title[500];
    float price;
    struct author *author;
};

int main() {
    struct book *book = (struct book*)malloc(sizeof(struct book));
    if (book == NULL) {
        printf("Memory allocation failed for book!\n");
        return 1;
    }
    
    book->author = (struct author*)malloc(sizeof(struct author));
    if (book->author == NULL) {
        printf("Memory allocation failed for author!\n");
        free(book);
        return 1;
    }
    
    printf("Enter the book title: ");
    scanf(" %s", book->title);
    printf("Enter the book price: ");
    scanf("%f", &book->price);
    
    printf("Enter author name: ");
    scanf("%s", &book->author->name);
    printf("Enter author age: ");
    scanf("%d", &book->author->age);
    
    printf("\nBook Details:\n");
    printf("Title: %s\n", book->title);
    printf("Price: %.2f\n", book->price);
    printf("Author: %s\n", book->author->name);
    printf("Author Age: %d\n", book->author->age);
    
    free(book->author);
    free(book);
    
    return 0;
}
