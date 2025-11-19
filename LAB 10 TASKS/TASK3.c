#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;
    char city[5][50];
    float temp[5];
    int i, maxIndex = 0;

    fptr = fopen("C:\\temp.txt","w");
    if (fptr == NULL)
        printf("File not found!\n");
        exit (1);

    for (i=0; i < 5; i++){
        printf("Enter city %d: \n", i+1);
        scanf("%s", &city[i]);
        printf("Enter temperature: \n");
        scanf("%f", &temp[i]);

        fprintf(fptr, "%s %.2f", city[i], temp[i]);
    }
    fclose(fptr);

    fptr = fopen("C:\\temp.txt","r");
    float maxTemp = -1000.0;
    char highC[50];
    float t;

    while(fscanf(fptr, "%s %f", city, &t) != EOF){
        if(t > maxTemp){
            maxTemp = t;
            strcpy(highC, city);
        }
    }
    fclose(fptr);
    printf("\ncity with the highest temperature is: %s with %.2f", highC, maxTemp);

    return 0;
}