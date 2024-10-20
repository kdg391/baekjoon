#include <iostream>

int main(void) {
    int a, b, c, d, e, f;
    int ansX = 0, ansY = 0;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> a >> b >> c >> d >> e >> f;

    for (int x = -999; x <= 999; x++) {
        for (int y = -999; y <= 999; y++) {
            if (a * x + b * y == c && d * x + e * y == f) {
                ansX = x;
                ansY = y;
                break;
            }
        }
    }

    std::cout << ansX << ' ' << ansY << '\n';

    return 0;
}