#include <iostream>

int main(void) {
    int N, M;
    int arr[100];
    int sum, max = 0;

    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
        std::cin >> arr[i];

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                sum = arr[i] + arr[j] + arr[k];

                if (sum <= M && max < sum)
                    max = sum;
            }
        }
    }

    std::cout << max << '\n';

    return 0;
}