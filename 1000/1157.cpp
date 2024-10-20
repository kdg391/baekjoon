#include <iostream>
#include <string>

int main() {
    std::string S;
    int alphabets[26] = { 0 };
    int max = 0, count = 0;
    char answer = 0;

    std::cin >> S;

    for (int i = 0; i < (int)S.length(); i++) {
        int L;

        if (S[i] >= 'a' && S[i] <= 'z')
            L = S[i] - 'a';
        else
            L = S[i] - 'A';

        alphabets[L]++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabets[i] > max)	{
            max = alphabets[i];
            answer = i + 'A';
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alphabets[i] == max)
            count++;
    }

    if (count >= 2)
        std::cout << "?\n";
    else
        std::cout << answer << '\n';

    return 0;
}