#include <iostream>

int main(void) {
    int N;
    int sum = 0;

    std::cin >> N;

    for (int i = 1; i <= N; i++)
        sum += i;

    std::cout << sum << '\n';

    return 0;
}