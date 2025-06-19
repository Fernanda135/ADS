#include <stdio.h>

void calc_esfera(float r, float *area, float *volume);

int main() {
    float r, area, volume;

    printf("Raio: ");
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);

    printf("A area da esfera e: %.2f\n", area);
    printf("O volume da esfera e: %.2f\n", volume);

    return 0;
}

void calc_esfera(float r, float *area, float *volume) {

    *area = 4 * 3.14 * r * r;
    *volume = (4.0f / 3.0f) * 3.13 * r * r * r;

}
