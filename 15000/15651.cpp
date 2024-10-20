#include <iostream>
#include <vector>

int N, M;
std::vector<int> v;

void backTracking(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            std::cout << v[i] << ' ';

        std::cout << '\n';

        return;
    }

    for (int i = 1; i <= N; i++) {
        v.push_back(i);
        backTracking(cnt + 1);
        v.pop_back();
    }
}

int main() {
    std::cin >> N >> M;

    backTracking(0);

    return 0;
}