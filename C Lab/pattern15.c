#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("First letter: %c\n", name[0]);

    return 0;
}