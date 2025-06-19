#include <stdio.h>

int main() {

    int n;
    printf("Numero:");
    scanf("%d", &n);


    printf("Decimal: %d\n", n);
    printf("Hexadecimal: %X\n", n);
    printf("Octal: %o\n", n);

    return 0;
}