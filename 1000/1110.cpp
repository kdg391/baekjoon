#include <iostream>

int main() {
    int N, newN;
    int count = 0;

    std::cin >> N;

    newN = N;

    do {
        int ten = newN / 10;
        int one = newN % 10;

        newN = (one * 10) + ((ten + one) % 10);

        count++;
    } while (N != newN);

    std::cout << count << '\n';

    return 0;
}