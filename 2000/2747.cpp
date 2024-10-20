#include <iostream>

int numbers[45];

int fibonacci(int n);

int main() {
    int n;

    std::cin >> n;
    std::cout << fibonacci(n);

    return 0;
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        if (numbers[n] == 0)
            numbers[n] = fibonacci(n - 1) + fibonacci(n - 2);

        return numbers[n];
    }
}