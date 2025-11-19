#include <stdio.h>
#include <string.h>

int main() {
    char books[10][50] = {
    "AtomicHabits","DeepWork","TheAlchemist","PowerOfNow"
    "RichDadPoorDad","ThinkAndGrowRich","SubtleArt",
    "Ikigai","MakeYourBed","Grit"};
    char search[50];
    int found = 0;

    printf("Enter book title to search: ");
    scanf("%s", search);

    for (int i = 0; i < 10; i++) {
        if (strcmp(search, books[i]) == 0) {
            found = 1;
            break;
        }
    }

    if (found = 1)
        printf("Book Found\n");
    else
        printf("Book Not Found\n");

    return 0;
}
