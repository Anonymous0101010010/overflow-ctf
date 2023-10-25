#include <stdio.h>
#include <string.h>

int main() {
    char buffer[64];
    char flag[] = "flag-caught";

    printf("welcome to my mini ctf challenge\n");
    printf("Enter your input: ");
    gets(buffer);

    if (strcmp(buffer, flag) == 0) {
        printf("you found the flag!: %s\n", flag);
    } else {
        printf("error, try again\n");
    }

    return 0;
}

