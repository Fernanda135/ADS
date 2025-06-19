#include <stdio.h>

int main() {

    int m, dm, cm, mm;
    printf("Metros:");
    scanf("%d", &m);

    dm = m * 10;
    cm = m * 10 * 10;
    mm = m * 10 * 10 * 10;

    printf("%d metros em decimetros: %d\n", m, dm);
    printf("%d metros em centimetros: %d\n", m, cm);
    printf("%d metros em milimetros: %d\n", m, mm);

    return 0;
}