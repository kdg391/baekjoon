#include <iostream>

int main() {
    int X;
    int len = 0;

    std::cin >> X;

    while (X > 0) {
        if (X % 2 == 1)
            len++;

        X /= 2;
    }

    std::cout << len << '\n';

	return 0;
}