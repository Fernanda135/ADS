#include <stdio.h>

int main() {

    printf("-----------------------\n");
    printf("DOUBLE\n");

    double FD, CD;

    printf("Fahrenheit:");
    scanf("%lf", &FD);

    CD = (FD - 32.0) * (5.0/9.0);

    printf("A temperatura %lf fahrenheit em celsius e: %lf\n", FD, CD);


    printf("-----------------------\n");

    
    printf("INTEIRO\n");

    int FI, CI;

    printf("Fahrenheit:");
    scanf("%d", &FI);

    CI = (FI - 32) * (5/9);

    printf("A temperatura %d fahrenheit em celsius e: %d\n", FI, CI);


    return 0;
}