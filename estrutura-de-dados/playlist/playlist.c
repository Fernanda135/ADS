#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Musica {
    char titulo[100];
    struct Musica *ant, *prox;
} Musica;

typedef struct {
    Musica *atual;
    int tamanho;
} Playlist;

void iniciar(Playlist *p) {
    p->atual = NULL;
    p->tamanho = 0;
}

Musica* criar(const char *titulo) {
    Musica *m = malloc(sizeof(Musica));
    strcpy(m->titulo, titulo);
    m->ant = m->prox = NULL;
    return m;
}

void adicionar(Playlist *p, const char *titulo, int pos) {
    Musica *nova = criar(titulo);

    if (p->tamanho == 0) {
        nova->prox = nova->ant = nova;
        p->atual = nova;
    } else if (pos <= 1) {
        Musica *ult = p->atual->ant;
        nova->prox = p->atual;
        nova->ant = ult;
        ult->prox = nova;
        p->atual->ant = nova;
        p->atual = nova;
    } else if (pos > p->tamanho) {
        Musica *ult = p->atual->ant;
        nova->prox = p->atual;
        nova->ant = ult;
        ult->prox = nova;
        p->atual->ant = nova;
    } else {
        Musica *m = p->atual;
        for (int i = 1; i < pos - 1; i++) m = m->prox;
        nova->prox = m->prox;
        nova->ant = m;
        m->prox->ant = nova;
        m->prox = nova;
    }

    p->tamanho++;
}

void remover(Playlist *p, int pos) {
    if (p->tamanho == 0 || pos < 1 || pos > p->tamanho) {
        printf("Posição inválida.\n");
        return;
    }

    Musica *m = p->atual;
    for (int i = 1; i < pos; i++) m = m->prox;

    if (p->tamanho == 1) {
        p->atual = NULL;
    } else {
        m->ant->prox = m->prox;
        m->prox->ant = m->ant;
        if (m == p->atual)
            p->atual = m->prox;
    }

    printf("Removida: %s - %s\n", m->titulo);
    free(m);
    p->tamanho--;
}

void proxima(Playlist *p) {
    if (p->atual) {
        p->atual = p->atual->prox;
        printf("Tocando: %s - %s\n", p->atual->titulo);
    }
}

void anterior(Playlist *p) {
    if (p->atual) {
        p->atual = p->atual->ant;
        printf("Tocando: %s - %s\n", p->atual->titulo);
    }
}

void listar(Playlist *p) {
    if (p->tamanho == 0) {
        printf("Playlist vazia.\n");
        return;
    }

    Musica *m = p->atual;
    for (int i = 1; i <= p->tamanho; i++) {
        printf("%d. %s - %s", i, m->titulo);
        if (m == p->atual) printf(" [TOCANDO]");
        printf("\n");
        m = m->prox;
    }
}

int main() {
    Playlist p;
    iniciar(&p);
    int opcao, pos;
    char titulo[100];

    do {
        printf("\n=== Menu da Playlist ===\n");
        printf("1. Adicionar musica no inicio\n");
        printf("2. Adicionar musica no final\n");
        printf("3. Adicionar em posicao\n");
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
            case 2:
            case 3:
                printf("Titulo: ");
                fgets(titulo, 100, stdin);
                titulo[strcspn(titulo, "\n")] = '\0';

                if (opcao == 1)
                    adicionar(&p, titulo, 1);
                else if (opcao == 2)
                    adicionar(&p, titulo, p.tamanho + 1);
                else {
                    printf("Posicao (1 a %d): ", p.tamanho + 1);
                    scanf("%d", &pos);
                    adicionar(&p, titulo, pos);
                }
                break;

            case 4:
                printf("Posicao (1 a %d): ", p.tamanho);
                scanf("%d", &pos);
                remover(&p, pos);
                break;

            case 5:
                proxima(&p);
                break;

            case 6:
                anterior(&p);
                break;

            case 7:
                listar(&p);
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