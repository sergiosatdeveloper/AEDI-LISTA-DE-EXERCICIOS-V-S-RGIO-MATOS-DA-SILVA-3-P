#include <stdio.h>

int soma_recursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma_recursiva(n - 1);
    }
}

int main() {
    int n = 5; // Teste com diferentes valores
    printf("Soma de 1 até %d: %d\n", n, soma_recursiva(n));
    return 0;
}
