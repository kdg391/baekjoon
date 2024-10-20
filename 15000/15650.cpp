#include <iostream>
#include <vector>

int N, M;
bool visited[9];
int arr[9];

void backTracking(int n, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            std::cout << arr[i] << ' ';

        std::cout << '\n';

        return;
    }

    for (int i = n; i <= N; i++) {
        if (visited[i]) continue;

        visited[i] = 1;

        arr[cnt] = i;
        backTracking(i + 1, cnt + 1);

        visited[i] = 0;
    }
}

int main() {
    std::cin >> N >> M;

    backTracking(1, 0);

    return 0;
}