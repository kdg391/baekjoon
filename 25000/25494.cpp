#include <iostream>

int main() {
    int T;
    int count;

    std::cin >> T;

    while (T > 0) {
        int a, b, c;

        std::cin >> a >> b >> c;

        count = 0;

        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                for (int k = 1; k <= c; k++) {
                    if ((i % j == j % k) && (j % k == k % i))
                        count++;
                }
            }
        }

        std::cout << count << '\n';

        T--;
    }

    return 0;
}