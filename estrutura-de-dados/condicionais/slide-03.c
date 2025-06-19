#include <stdio.h>

int main() {

    int idade;
    printf("Idade:");
    scanf("%d", &idade);

    if (idade <= 4) {
        printf("Bebe");
    }
    else if (idade <= 12) {
        printf("Crianca");
    }
    else if (idade <= 21) {
        printf("Adolescente");
    }
    else if (idade <= 60) {
        printf("Adulto");
    }
    else{
        printf("Idoso");
    }

    return 0;
}