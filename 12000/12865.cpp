#include <iostream>
#include <algorithm>

int main() {
    int N, K;
    int W[101];
    int V[101];
    int dp[101][100001];

    std::cin >> N >> K;

    for (int i = 1; i <= N; i++)
        std::cin >> W[i] >> V[i];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (j >= W[i]) dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
            else dp[i][j] = dp[i - 1][j];
        }
    }

    std::cout << dp[N][K] << '\n';

    return 0;
}