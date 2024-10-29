#include <stdio.h>

int busca_binaria(int arr[], int esquerda, int direita, int elemento) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (arr[meio] == elemento) {
            return meio;
        } else if (arr[meio] > elemento) {
            return busca_binaria(arr, esquerda, meio - 1, elemento);
        } else {
            return busca_binaria(arr, meio + 1, direita, elemento);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elemento = 5;
    int resultado = busca_binaria(arr, 0, n - 1, elemento);
    
    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }
    return 0;
}
