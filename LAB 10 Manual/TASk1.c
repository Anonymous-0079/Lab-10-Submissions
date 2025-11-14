#include <stdio.h>
#include <string.h>

int main() {
    char feedback[200];
    char updated[400] = ""; 
    char *pos, *start;
    
    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    // Remove newline
    feedback[strcspn(feedback, "\n")] = '\0';

    int length = strlen(feedback);
    printf("Total characters: %d\n", length);
 
    if (strstr(feedback, "good"))
        printf("The feedback mentions 'good'.\n");
    if (strstr(feedback, "bad"))
        printf("The feedback mentions 'bad'.\n");

    start = feedback;
    while ((pos = strstr(start, "bad")) != NULL) {
        // Copy part before "bad"
        strncat(updated, start, pos - start);
        // Add replacement text
        strcat(updated, "not good");
        // Move start pointer to after "bad"
        start = pos + 3;
    }
    strcat(updated, start);

    printf("Updated feedback: %s\n", updated);

    return 0;
}


