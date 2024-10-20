#include <iostream>

int dp[1001];

int main() {
    int n;

    std::cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

    std::cout << dp[n] << '\n';

    return 0;
}