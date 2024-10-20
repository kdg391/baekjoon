#include <iostream>

int main(void) {
    int n, x;
    int arr[10000];
    
    std::cin >> n >> x;
    
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        if (x > arr[i])
            std::cout << arr[i] << ' ';
    }

    return 0;
}