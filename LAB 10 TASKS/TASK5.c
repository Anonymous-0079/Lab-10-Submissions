#include <stdio.h>
#include <string.h>

int main() {
    char pass[50];
    printf("Enter password: ");
    scanf("%s", pass);

    int length = strlen(pass);
    int hasSpecial = 0;

    char specials[] = "!@#$%^&/";

    for (int i = 0; pass[i] != '\0'; i++) {
        if (strchr(specials, pass[i])) {
            hasSpecial = 1;
            break;
        }
    }

    if (length < 6)
        printf("Weak\n");
    else if (length >= 6 && hasSpecial == 0)
        printf("Medium\n");
    else
        printf("Strong\n");

    return 0;
}
