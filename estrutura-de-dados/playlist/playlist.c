#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Musica {
    char titulo[50];
    struct Musica *ant;
    struct Musica *prox;
} Musica;

Musica *inicio = NULL;
Musica *tocando = NULL;
int tamanho = 0;


Musica* novaMusica(char *titulo) {
    Musica *m = (Musica*)malloc(sizeof(Musica));
    strcpy(m->titulo, titulo);
    m->ant = m->prox = NULL;
    return m;
}

void adicionarInicio(char *titulo) {
    Musica *m = novaMusica(titulo);
    if (inicio == NULL) {
        m->prox = m->ant = m;
        inicio = tocando = m;
    } else {
        Musica *ultimo = inicio->ant;
        m->prox = inicio;
        m->ant = ultimo;
        ultimo->prox = m;
        inicio->ant = m;
        inicio = m;
    }
    tamanho++;
}

void adicionarFim(char *titulo) {
    Musica *m = novaMusica(titulo);
    if (inicio == NULL) {
        m->prox = m->ant = m;
        inicio = tocando = m;
    } else {
        Musica *ultimo = inicio->ant;
        m->prox = inicio;
        m->ant = ultimo;
        ultimo->prox = m;
        inicio->ant = m;
    }
    tamanho++;
}

void adicionarMeio(char *titulo, int pos) {
    if (pos <= 1) {
        adicionarInicio(titulo);
    } else if (pos > tamanho) {
        adicionarFim(titulo);
    } else {
        Musica *nova = novaMusica(titulo);
        Musica *m = inicio;
        for (int i = 1; i < pos - 1; i++) {
            m = m->prox;
        }
        nova->prox = m->prox;
        nova->ant = m;
        m->prox->ant = nova;
        m->prox = nova;
        tamanho++;
    }
}

void remover(int pos) {
    if (tamanho == 0 || pos < 1 || pos > tamanho) {
        printf("Posicao invalida.\n");
        return;
    }

    Musica *m = inicio;
    for (int i = 1; i < pos; i++) {
        m = m->prox;
    }

    if (tamanho == 1) {
        inicio = tocando = NULL;
    } else {
        if (m == inicio) inicio = m->prox;
        if (m == tocando) tocando = m->prox;

        m->ant->prox = m->prox;
        m->prox->ant = m->ant;
    }

    printf("Removida: %s\n", m->titulo);
    free(m);
    tamanho--;
}

void proxima() {
    if (tocando != NULL) {
        tocando = tocando->prox;
        printf("Tocando: %s\n", tocando->titulo);
    } else {
        printf("Nenhuma música na playlist.\n");
    }
}

void anterior() {
    if (tocando != NULL) {
        tocando = tocando->ant;
        printf("Tocando: %s\n", tocando->titulo);
    } else {
        printf("Nenhuma música na playlist.\n");
    }
}

void listar() {
    if (inicio == NULL) {
        printf("Playlist vazia.\n");
        return;
    }
    Musica *m = inicio;
    for (int i = 0; i < tamanho; i++) {
        printf("%d. %s", i + 1, m->titulo);
        if (m == tocando) printf(" [TOCANDO]");
        printf("\n");
        m = m->prox;
    }
}