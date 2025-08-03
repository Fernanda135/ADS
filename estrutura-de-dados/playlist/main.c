#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "playlist.c"

int main() {
    int opcao, pos;
    char titulo[50];

    do {
        printf("\n========================\n");
        printf("Tocando: %s\n", tocando ? tocando->titulo : "Nenhuma musica");
        printf("========================\n");
        printf("=== Menu da Playlist ===\n");
        printf("1. Adicionar musica no inicio\n");
        printf("2. Adicionar musica no final\n");
        printf("3. Adicionar musica em posicao\n");
        printf("4. Remover por posicao\n");
        printf("5. Proxima musica\n");
        printf("6. Musica anterior\n");
        printf("7. Listar musicas\n");
        printf("8. Sair\n");
        printf("========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Titulo: ");
                scanf("%s", titulo);
                adicionarInicio(titulo);
                break;

            case 2:
                printf("Titulo: ");
                scanf("%s", titulo);
                adicionarFim(titulo);
                break;

            case 3:
                printf("Titulo: ");
                scanf("%s", titulo);
                printf("Posicao (1 a %d): ", tamanho + 1);
                scanf("%d", &pos);
                adicionarMeio(titulo, pos);
                break;

            case 4:
                printf("Posicao (1 a %d): ", tamanho);
                scanf("%d", &pos);
                remover(pos);
                break;

            case 5:
                proxima();
                break;

            case 6:
                anterior();
                break;

            case 7:
                listar();
                break;

            case 8:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 8);

    return 0;
}