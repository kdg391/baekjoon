#include <iostream>

int main(void) {
    int N;
    int sizes[6];
    int T, P;
    int tBundle = 0;

    std::cin >> N;

    for (int i = 0; i < 6; i++)
        std::cin >> sizes[i];

    std::cin >> T >> P;

    for (int i = 0; i < 6; i++)
        tBundle += (sizes[i] + T - 1) / T;

    std::cout << tBundle << '\n';
    std::cout << N / P << ' ' << N % P << '\n';

    return 0;
}