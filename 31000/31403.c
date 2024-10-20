#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int factor;

    if (B < 10) factor = 10;
    else if (B < 100) factor = 100;
    else if (B < 1000) factor = 1000;
    else factor = 10000;

    printf("%d\n", A + B - C);
    printf("%d\n", A * factor + B - C);

    return 0;
}