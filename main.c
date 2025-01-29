#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12

void generateStrongPassword(int length);
char getRandomCharacter();

int main(void) {
    int length;
    char choice;

    do {
        printf("Enter desired password length (minimum 8, max 32): ");
        while (scanf("%d", &length) != 1 || length < 8 || length > 32) {
            printf("Invalid input! Enter a number between 8 and 32: ");
            while (getchar() != '\n'); // Clear input buffer
        }

        generateStrongPassword(length);

        printf("\nDo you want to generate another password? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void generateStrongPassword(int length) {
    srand(time(NULL));
    char password[length + 1];

    for (int i = 0; i < length; i++) {
        password[i] = getRandomCharacter();
    }
    password[length] = '\0';

    printf("Generated Strong Password: %s\n", password);
}

char getRandomCharacter() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+";
    return charset[rand() % (sizeof(charset) - 1)];
}
