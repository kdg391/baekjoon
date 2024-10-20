#include <iostream>

int main() {
    int n;
    int dp[1001];

    std::cin >> n;

    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;

    std::cout << dp[n] << '\n';

    return 0;
}