#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n1, n2;
    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);

    int soma = n1 + n2;
    printf("Soma: %d\n", soma);

    int prod = n1 * (n2 * n2);
    printf("Produto do 1 pelo quadrado do 2: %d\n", prod);
    
    int quad = n1 * n1;
    printf("Quadrado do 1: %d\n", quad);

    double raiz = sqrt((n1 * n1) + (n2 * n2));
    printf("Raiz quadrada da soma dos quadrados: %lf\n", raiz);

    double seno = sin(n1 - n2);
    printf("Seno da diferenca do 1 pelo 2: %lf\n", seno);
    
    int mod = abs(n1);
    printf("Modulo do numero 1: %d\n", mod);
    return 0;
}