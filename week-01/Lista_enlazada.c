#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num; 
    struct Node *next; 
}; 

int main () {
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node)); 
    struct Node *n3 = malloc(sizeof(struct Node)); 

    n1-> num = 10; 
    n2 -> num = 15; 
    n3 -> num = 20; 

    n1 -> next = n2; 
    n2 -> next = n3; 
    n3 -> next = NULL; 

    struct Node *actual = n1; 
    while (actual != NULL) {
        printf("%d\n", actual->num); 
        actual = actual -> next;  
    }

    free(n1); 
    free(n2); 
    free(n3); 

    return 0; 

}