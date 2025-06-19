#include <stdio.h>
#include <math.h>

int main() {
    int hr_chegada, min_chegada;
    int hr_saida, min_saida;

    printf("Hora de chegada (hr min): ");
    scanf("%d %d", &hr_chegada, &min_chegada);
    printf("Hora de partida (hr min): ");
    scanf("%d %d", &hr_saida, &min_saida);

    int chegada = hr_chegada * 60 + min_chegada;
    int saida = hr_saida * 60 + min_saida;

    if (saida < chegada) {
        saida += 24 * 60;
    }

    int minutos = saida - chegada;
    int horas = (int)ceil((float)minutos / 60);

    float custo = 0.0;

    if (horas >= 1 && horas <= 2) {
        custo = horas * 1.00;
    } else if (horas >= 3 && horas <= 4) {
        custo = 2 * 1.00 + (horas - 2) * 1.40;
    } else if (horas >= 5) {
        custo = 2 * 1.00 + 2 * 1.40 + (horas - 4) * 2.00;
    }

    printf("Custo do estacionamento: R$ %.2f\n", custo);

    return 0;
}