#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string choose;
    std::string devilNum = "666";
    int N;
    int cnt = 0;
    int i = 1;
    
    std::cin >> N;

    while (cnt != N) {
        choose = std::to_string(i);

        if (choose.find(devilNum) != std::string::npos)
            cnt++;

        i++;
    }

    std::cout << choose;

    return 0;
}