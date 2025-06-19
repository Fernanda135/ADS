#include <stdio.h>
#include <math.h>


int raizes(float a, float b, float c, float *x1, float
*x2);

int main() {

    float a, b, c, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    int numRaizes = raizes(a, b, c, &x1, &x2);

    if (numRaizes == 2) {
        printf("Duas raízes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } 
    
    else if (numRaizes == 1) {
        printf("Uma raiz real: x1 = x2 = %.2f\n", x1);
    } 
    
    else {
        printf("Nenhuma raiz real.\n");
    }


    return 0;
}



int raizes(float a, float b, float c, float *x1, float
*x2) {

    if (a == 0) {
        return 0;
    }

    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    } 
    
    else if (delta == 0) {
        *x1 = *x2 = -b / (2 * a);
        return 1;
    } 
    
    else {
        return 0;
    }


}