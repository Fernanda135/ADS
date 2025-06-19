#include <stdio.h>

int main() {

    float n1, n2;
    char op;

    printf("numero 1:");
    scanf("%f", &n1);

    printf("Operacao:");
    scanf(" %c", &op);

    printf("numero 2:");
    scanf("%f", &n2);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", n1, n2, (n1 + n2));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", n1, n2, (n1 - n2));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", n1, n2, (n1 * n2));
            break;
        case '/':
            if (n2 != 0) {
                printf("%.2f / %.2f = %.2f\n", n1, n2, (n1 / n2));
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Oprecao invalida!");
            break;
    }

    return 0;
}