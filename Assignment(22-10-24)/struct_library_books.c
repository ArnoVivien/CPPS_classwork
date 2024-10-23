#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int pub_year;
};

struct Library {
    struct Book b[100];  
    int bcount;          
};


add_book(struct Library *l) {
    if (l->bcount < 100) {
        struct Book *newBook = &l->b[l->bcount];  

        printf("Enter book title: ");
        scanf(" %s", newBook->title);  
        
        printf("Enter book author: ");
        scanf(" %s", newBook->author); 

        printf("Enter publication year: ");
        scanf("%d", &newBook->pub_year);

        l->bcount++; 
    } else {
        printf("\nLibrary is full, cannot add more books.\n");
    }
}


display_books(struct Library *l) {
    if (l->bcount == 0) {
        printf("\nThe library has no books.\n");
    } else {
        for (int i = 0; i < l->bcount; ++i) {
            printf("\nBook %d:", i + 1);
            printf("\nTitle: %s", l->b[i].title);
            printf("\nAuthor: %s", l->b[i].author);
            printf("\nPublication Year: %d", l->b[i].pub_year);
            printf("\n-------------------------\n");
        }
    }
}

main() {
    struct Library l;
    l.bcount = 0;
    int n;

    printf("Enter the number of books to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        add_book(&l);
    }

    display_books(&l);
}
