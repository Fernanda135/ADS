#include <stdio.h>

int main() {

    int n1, n2;
    printf("numero 1:");
    scanf("%d", &n1);
    printf("numero 2:");
    scanf("%d", &n2);

    if (n1 > n2) {
        for (int i = n2; i <= n1; i++) {
            printf("%d\n", i);
        }
    }
    else if (n1 < n2) {
        for (int i = n2; i >= n1; i--) {
            printf("%d\n", i);
        }
    }
    else {
        printf("valores iguais\n");
    }



    return 0;
}