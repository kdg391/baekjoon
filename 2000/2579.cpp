#include <iostream>
#include <algorithm>

int scores[301];
int stairs[301];

int main() {
    int n;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
        std::cin >> stairs[i];

    scores[1] = stairs[1];
    scores[2] = stairs[1] + stairs[2];
    scores[3] = std::max(stairs[1], stairs[2]) + stairs[3];

    for (int i = 4; i <= n; i++)
        scores[i] = std::max(scores[i - 2], scores[i - 3] + stairs[i - 1]) + stairs[i];

    std::cout << scores[n] << '\n';

    return 0;
}