#include <iostream>

int main() {
    int N;
    int count = 0;

    std::cin >> N;

    while (N >= 0) {
        if (N % 5 == 0) {
            count += N / 5;
            std::cout << count << '\n';

            return 0;
        }

        N -= 3;
        count++;
    }

    std::cout << "-1\n";

    return 0;
}