#include <stdio.h>

int main() {
    FILE *fptr;
    char category[50];
    float amount;

    fptr = fopen("expenses.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter expense category: ");
    scanf("%s", category);
    printf("Enter amount: ");
    scanf("%f", &amount);
    fprintf(fptr, "%s %.2f\n", category, amount);
    fclose(fptr);

    fptr = fopen("expenses.txt", "r");
    char cat[50];
    float amt;

    printf("\nCurrent Expenses:\n");
    while (fscanf(fptr, "%s %f", cat, &amt) != EOF)
        printf("%s : %.2f\n", cat, amt);

    fclose(fptr);
    return 0;
}
