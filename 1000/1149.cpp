#include <iostream>
#include <algorithm>

int main() {
    int dp[1001][3];
    int N;

    std::cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            std::cin >> dp[i][j];

    for (int i = 1; i < N; i++) {
        dp[i][0] = std::min(dp[i - 1][1], dp[i - 1][2]) + dp[i][0];
        dp[i][1] = std::min(dp[i - 1][0], dp[i - 1][2]) + dp[i][1];
        dp[i][2] = std::min(dp[i - 1][0], dp[i - 1][1]) + dp[i][2];
    }

    std::cout << std::min(dp[N - 1][0], std::min(dp[N - 1][1], dp[N - 1][2])) << '\n';

    return 0;
}