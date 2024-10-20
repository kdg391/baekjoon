#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6;

    scanf("%d %d", &n1, &n2);

    n3 = n1 * (n2 % 10);
    n4 = n1 * ((n2 / 10) % 10);
    n5 = n1 * ((n2 / 100) % 10);
    n6 = n1 * n2;

    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);
    printf("%d\n", n6);

    return 0;
}