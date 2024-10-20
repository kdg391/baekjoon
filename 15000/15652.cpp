#include <iostream>
#include <vector>

int N, M;
int arr[9];

void backTracking(int n, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            std::cout << arr[i] << ' ';

        std::cout << '\n';

        return;
    }

    for (int i = n; i <= N; i++) {
        arr[cnt] = i;
        backTracking(i, cnt + 1);
    }
}

int main() {
    std::cin >> N >> M;

    backTracking(1, 0);

    return 0;
}