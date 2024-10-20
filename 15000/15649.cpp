#include <iostream>
#include <vector>

int N, M;
bool visited[9];
std::vector<int> v;

void backTracking(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            std::cout << v[i] << ' ';

        std::cout << '\n';

        return;
    }

    for (int i = 1; i <= N; i++) {
        if (visited[i]) continue;

        visited[i] = 1;

        v.push_back(i);
        backTracking(cnt + 1);
        v.pop_back();

        visited[i] = 0;
    }
}

int main() {
    std::cin >> N >> M;

    backTracking(0);

    return 0;
}