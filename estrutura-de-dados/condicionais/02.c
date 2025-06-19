#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("N:");
    scanf("%d", &n);

    for(int i = 1; i <= 9; i++){
        printf("%d + %d = %d\t", n, i, (n+i));
        printf("%d - %d = %d\t", n, i, (n-i));
        printf("%d * %d = %d\t", n, i, (n*i));
        printf("%d / %d = %d\n", n, i, (n/i));
    }

    return 0;
}