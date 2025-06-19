#include <stdio.h>

int main() {
    printf("Decimal\tHexadecimal\tCaractere\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i <= 127; i++) {
        printf("%d\t0x%02X\t\t", i, i);
        
        if (i >= 32 && i <= 126) {
            printf("%c\n", i);
        } else {
            printf(" \n");
        }
    }

    return 0;
}
