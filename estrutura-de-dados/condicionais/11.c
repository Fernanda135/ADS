#include <stdio.h>

int main() {
    int dia, mes, ano, bissexto;
    int maximo = 2008;

    printf("Digite a data de nascimento (dia mês ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

    if (ano > maximo || mes < 1 || mes > 12 || dia < 1) {
        printf("Data inválida\n");
        return 0;
    }

    if ((mes == 2 && (dia > 29 || (dia == 29 && !bissexto))) ||
        (dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) ||
        (dia > 31)) {
        printf("Data inválida\n");
    } else {
        printf("Data válida\n");
    }

    return 0;
}