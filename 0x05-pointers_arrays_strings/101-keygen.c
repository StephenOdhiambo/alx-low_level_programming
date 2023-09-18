#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10  // You can adjust the length as needed

int main() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));
    
    printf("Generated Password: ");
    for (int i = 0; i < 3330; i++) {
        char random_char = charset[rand() % (sizeof(charset) - 1)];
        printf("%c", random_char);
    }
    printf("\n");
    
    return 0;
}
