#include <stdio.h>

int main() {
    int tamanho = 0;
    int posicao = 0;

    scanf("%d", &tamanho);
    
    if (tamanho <= 0) {
        printf("Tamanho do vetor deve ser positivo.\n");
        return 1;
    }

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    int menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}
