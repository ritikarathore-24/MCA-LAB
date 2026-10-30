#include <stdio.h>

int main() {
    int i, j, s;

    for (i = 1; i <= 4; i++) {
        for (s = 1; s <= 4 - i; s++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    for (i = 3; i >= 1; i--) {
        for (s = 1; s <= 4 - i; s++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}