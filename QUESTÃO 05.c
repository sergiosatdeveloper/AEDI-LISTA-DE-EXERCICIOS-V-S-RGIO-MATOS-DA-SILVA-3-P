#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int a = 56, b = 98;
    printf("MDC de %d e %d: %d\n", a, b, mdc(a, b));
    return 0;
}
