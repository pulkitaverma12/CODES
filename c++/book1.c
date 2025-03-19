#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[50];
    int page;
    float price;
};

int main() {
    int n = 3; 

    // Dynamically allocate memory for 'n' books
    struct book* books = (struct book*)malloc(n * sizeof(struct book));

    if (books == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    struct book tempBooks[] = {
        {"love", 180, 10.99},
        {"hello", 328, 15.50},
        {"to the king", 281, 12.75}
    };

    for (int i = 0; i < n; i++) {
        books[i] = tempBooks[i];
    }

    // Display book details
    printf("\nBook Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Pages: %d\n", books[i].page);
        printf("Price: %.2f\n", books[i].price);
    }

    // Free allocated memory
    free(books);

    return 0;
}
