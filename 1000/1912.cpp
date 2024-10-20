#include <iostream>
#include <algorithm>

int main() {
	int n;
    int sum = -2147483648;

	std::cin >> n;

    int* arr = new int[n + 1];
    int* dp = new int[n + 1];

    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    for (int i = 0; i < n; i++) {
        dp[i] = std::max(dp[i - 1] , 0) + arr[i];
        sum = std::max(sum, dp[i]);
    }

    std::cout << sum << '\n';

	return 0;
}