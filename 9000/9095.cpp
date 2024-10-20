#include <iostream>

int dp[11];

int main() {
    int T;

    std::cin >> T;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;

    for (int i = 5; i < 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    for (int i = 0; i < T; i++) {
        int n;

        std::cin >> n;

        std::cout << dp[n] << ' ';
    }

    return 0;
}