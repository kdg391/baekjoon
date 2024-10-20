#include <iostream>

int main() {
    int A, B;
    int result;

    std::cin >> A >> B;

    if (A > B)
        result = B * 100 / 2;
    else
        result = A * 100 / 2;

    std::cout << result << '\n';

    return 0;
}