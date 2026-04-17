#include <stdio.h>

void merge(int N[], int inicio, int meio, int fim);
void mergesort(int V[], int inicio, int fim);

void main() {
    int num[100000]; // Array com limite de 100000 pq a entrada é 0 <  N < 100000
    int n;
    int total = 0; // Tamanho

    // 1. Leitura dos dados
    while (total < 100000 && scanf("%d", &n) == 1) {
        num[total] = n;
        total++;

        // Tava ficando preso no while, procurando entrada, então faz a parada quando tiver nova linha
        char proximo;
        scanf("%c", &proximo);
        if (proximo == '\n') break;
    }

    mergesort(num, 0, total - 1);

    for (int i = 0; i < total; i++) {
        printf("%d ", num[i]);
    }
}

void mergesort(int N[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        mergesort(N, inicio, meio);
        mergesort(N, meio + 1, fim);
        merge(N, inicio, meio, fim);
    }
}

void merge(int N[], int inicio, int meio, int fim) {
    // logica
}