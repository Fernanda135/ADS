#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    printf("A:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("C:");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Triangulo equilatero");
    }
    else if (a == b || a == c || b == c) {
        printf("Triangulo isoceles");
    }
    else if (a != b || a != c || b != c) {
        printf("Triangulo escaleno");
    }
    else {
        printf("Nao e um triangulo!");
    }

    return 0;
}