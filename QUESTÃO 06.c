#include <stdio.h>

int maior(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a = 10, b = 15, c = 5;
    printf("Maior entre %d, %d e %d: %d\n", a, b, c, maior(a, b, c));
    return 0;
}
