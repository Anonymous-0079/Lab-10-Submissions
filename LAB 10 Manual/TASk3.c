#include <stdio.h>
#include <string.h>

int main() {
    char email[100];    
    char domain[100];   
    char *atPosition;  

    printf("Enter employee email: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = '\0';

    atPosition = strchr(email, '@');
    
    if (atPosition != NULL) {
        // Copy everything after '@' into domain
        strcpy(domain, atPosition + 1);
        printf("Domain extracted: %s\n", domain);
    } else {
        printf("Invalid email! No '@' found.\n");
    }

    return 0;
}
