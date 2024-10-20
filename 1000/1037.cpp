#include <iostream>

int main() {
    int count;
    int max = 2, min = 1000000;

    std::cin >> count;

    for (int i = 0; i < count; i++) {
        int v;

        std::cin >> v;

        if (v > max)
            max = v;

        if (v < min)
            min = v;
    }

    std::cout << max * min << '\n';

    return 0;
}