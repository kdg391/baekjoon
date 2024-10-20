#include <iostream>
#include <string>

int main() {
    std::string s[3];
    int value;
    int index;

    for (int i = 0; i < 3; i++) {
        std::cin >> s[i];

        if (s[i] != "Fizz" && s[i] != "Buzz" && s[i] != "FizzBuzz") {
            value = stoi(s[i]);
            index = i;
        }
    }

    if (index == 0)
        value += 3;
    else if (index == 1)
        value += 2;
    else if (index == 2)
        value += 1;

    if (value % 15 == 0)
        std::cout << "FizzBuzz\n";
    else if (value % 3 == 0)
        std::cout << "Fizz\n";
    else if (value % 5 == 0)
        std::cout << "Buzz\n";
    else
        std::cout << value << '\n';

    return 0;
}