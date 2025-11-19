#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE*fptr;
    char name[50];
    int count;

    fptr = fopen("C:\\attendance.txt","r");
    if (fptr = NULL){
        printf("File not found\n"); 
        exit (1);
    }

    while (fscanf(fptr, "%s", name) != EOF){
        printf("%s\n", name);\
        count++;
    }
    fclose(fptr);
    printf("\nTotalStudents: %d\n", count);
    return 0;
}