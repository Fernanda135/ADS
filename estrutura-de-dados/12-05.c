#include <stdio.h>
#include <math.h>

int main() {

    printf("Primeira Questao\n");

    int x, y, z;

    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("z = ");
    scanf("%d", &z);

    int resultado = pow(x, 3) + pow(y, 2) + (x * y * z);
    printf("Resultado = %d\n", resultado);

    printf("Fim da Questao\n\n");
    printf("------------------\n");

    printf("Segunda Questao\n");
    float n = 100000 % 13;
    printf("O resto da divisao de 100000 por 13 e: %.2f\n", n);

    printf("Fim da Questao\n\n");
    printf("------------------\n");

    printf("Terceira Questao\n");

    float a, b, c, d, e,r;

    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("d = ");
    scanf("%f", &d);
    printf("e = ");
    scanf("%f", &e);

    r = pow(a, 3) * ((b + c) / d + e);

    printf("Resultado = %.0f\n", r);

    printf("Fim da Questao\n\n");
    printf("------------------\n");

    printf("Quarta Questao\n");

    int x1, x2, x3, res;

    printf("x1 = ");
    scanf("%d", &x1);
    printf("x2 = ");
    scanf("%d", &x2);
    printf("x3 = ");
    scanf("%d", &x3);

    res = pow(x1 + 3, 4) + pow(x2 * x3, 3);
    printf("Resultado = %d\n", res);

    printf("Fim da Questao\n\n");
    printf("------------------\n");

    return 0;
}