#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char name[50];
    float price;
    int qty;

    fptr = fopen("C:\\product.txt","w");
    if(fptr == NULL){
        printf("File not found!\n");
        exit (1);
    }

    printf("Enter product name: ");
    scanf("%s", &name);
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &qty);

    fprintf(fptr, "Product: %s\nPrice: %f\nQauntity: %d\n", name, price, qty);
    fclose(fptr);

    printf("Data Stored Successfully.\n");
    return 0;
}

