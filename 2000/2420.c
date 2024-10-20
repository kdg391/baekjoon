#include <stdio.h>

int main() {
    long int N, M;
    long int result;

    scanf("%ld %ld", &N, &M);

    result = N - M;

    printf("%ld\n", result < 0 ? -result : result);

    return 0;
}