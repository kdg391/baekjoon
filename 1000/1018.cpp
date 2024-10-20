#include <iostream>
#include <string>

std::string map[50];
int min = 64;

void check(char c, int x, int y) {
    int cnt = 0;

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == 0) {
                if (map[i][j] != c)
                    cnt++;
            } else {
                if (map[i][j] == c)
                    cnt++;
            }
        }
    }

    if (cnt < min) min = cnt;
}

int main() {
    int N, M;

    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
        std::cin >> map[i];

    for (int x = 0; x < N - 7; x++) {
        for (int y = 0; y < M - 7; y++) {
            check('B', x, y);
            check('W', x, y);
        }
    }

    std::cout << min << '\n';

    return 0;
}