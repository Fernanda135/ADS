#include <stdio.h>

int main() {

    float preco;
    printf("Preco:");
    scanf("%f", &preco);

    printf("Preco inicial: %.2f\n", preco);

    if (preco < 100) {
        preco += preco * 0.10;
    }
    else {
        preco += preco * 0.20;
    }

    printf("Apos a inflacao o preco ficou: %.2f", preco);

    return 0;
}