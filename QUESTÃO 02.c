#include <stdio.h>
#include <stdlib.h>

int* gerar_pa(int n, int valor_inicial, int razao) {
    int *array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        array[i] = valor_inicial + i * razao;
    }
    return array;
}

void imprimir_array(int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n = 5, valor_inicial = 1, razao = 2;
    int *array = gerar_pa(n, valor_inicial, razao);
    imprimir_array(array, n);
    free(array);
    return 0;
}
