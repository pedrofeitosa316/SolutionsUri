#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

typedef struct fila {
	Lista* ini;
	Lista* fim;
} Fila;

Fila* cria(void) {
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->ini = f->fim = NULL;
	return f;
}

void fila_insere(Fila* f, int v) {
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = v;
	novo->prox = NULL;
	if (f->fim != NULL)
		f->fim->prox = novo;
	else
		f->ini = novo; // a lista estava vazia
	f->fim = novo;
}

int retira(Fila* f) {
	Lista *t;
	int v;
	if (f->ini == NULL) {
		return 0;
	}
	t = f->ini;
	v = t->info;
	f->ini = t->prox;
	if (f->ini == NULL) /* fila ficou vazia? */
		f->fim = NULL;
	free(t);
	return v;
}

int main(void) {
    int i;
	for (i = 1; i != 0; i++) {
		Fila *fila = cria();
		int numero;
		int indiceVetor = 0;
		scanf("%d", &numero);
		int vetor[numero];
		if (numero != 0) {
			for (i = 1; i <= numero; i++) {
				fila_insere(fila, i);
			}

			for (i = 1; i != 0; i++) {
				if (fila->ini != NULL) {
					if (i % 2 != 0) {
						vetor[indiceVetor] = retira(fila);
						indiceVetor++;
					} else {
						int aux = retira(fila);
						fila_insere(fila, aux);
					}
				} else
					break;
			}
			printf("Discarded cards: ");
			for (i = 0; i < numero - 1; i++) {
				if (i == (numero - 2)){
					printf("%d", vetor[i]);
					break;
				}
				printf("%d, ", vetor[i]);
			}
			printf("\nRemaining card: %d\n", vetor[numero - 1]);
		} else
			break;
	}
}