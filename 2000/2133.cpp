#include <iostream>

int main() {
    int N;
    int dp[31];

    std::cin >> N;

    if (N % 2 == 1) {
        std::cout << "0\n";

        return 0;
    }

    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;
    dp[3] = 0;

    for (int i = 4; i <= N; i++) {
        dp[i] = dp[i - 2] * 3;

        for (int j = 4; j <= i; j += 2) {
            dp[i] += dp[i - j] * 2;
        }
    }

    std::cout << dp[N] << '\n';

    return 0;
}