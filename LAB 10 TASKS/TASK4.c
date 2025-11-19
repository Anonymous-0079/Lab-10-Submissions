#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char guests[5][50];
    int rooms[5];
    char search[50];
    int i, found = 0;

    fptr = fopen("C:\\temp.txt","w");
    if (fptr == NULL) {
		printf("ERROR! Unable to open file!\n");
		exit(1);
	}
    
    for (i = 0; i < 5; i++) {
        printf("Enter guest name: ");
        scanf("%s", guests[i]);
        printf("Enter room number: ");
        scanf("%d", &rooms[i]);
        fprintf(fptr, "%s %d\n", guests[i], rooms[i]);
    }
    fclose(fptr);

    printf("\nEnter guest name to search: ");
    scanf("%s", search);

    fptr = fopen("hotel.txt", "r");
    char name[50];
    int room;

    while (fscanf(fptr, "%s %d", name, &room) != EOF) {
        if (strcmp(name, search) == 0) {
            printf("Guest found! Room number: %d\n", room);
            found = 1;
            break;
        }
    }
    fclose(fptr);

    if (found=0)
        printf("Guest not found.\n");
    return 0;
}
