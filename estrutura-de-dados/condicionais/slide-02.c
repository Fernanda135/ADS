#include <stdio.h>

int main() {

    int n1, n2, n3;
    printf("numero 1:");
    scanf("%d", &n1);
    printf("numero 2:");
    scanf("%d", &n2);
    printf("numero 3:");
    scanf("%d", &n3);

    int maior = 0;

    if(n1 > maior){
        maior = n1;
        printf("O maior numero e: %d", maior);
    }
    else if(n2 > maior){
        maior = n2;
        printf("O maior numero e: %d", maior);
    }
    else if(n3 > maior){
        maior = n3;
        printf("O maior numero e: %d", maior);
    }
    else {
        printf("Os numeros sao todos iguai!");
    }
    return 0;
}