#include <stdio.h>

int soma_recursiva(int n) {
    if (n == 1)
        return 1;
    else
        return n + soma_recursiva(n - 1);
}

int main() {
    int entrada;
    
    printf("Numero:");
    scanf("%d", &entrada);

    printf("%d\n", soma_recursiva(entrada));

    return 0;
}
