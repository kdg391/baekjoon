#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

int main() {
    int T;

    std::cin >> T;

    for (int i = 0; i < T; i++) {
        std::string p;
        std::cin >> p;

        int n;
        std::cin >> n;

        std::string str;
        std::cin >> str;

        std::deque<int> dq;
        std::string tmp = "";

        for (int j = 1; j < str.length(); j++) {
            if (str[j] == ',' || str[j] == ']') {
                if (tmp != "") {
                    dq.push_back(std::stoi(tmp));
                    tmp = "";
                }
            }
            else {
                tmp += str[j];
            }
        }

        bool reversed = false;
        bool err = false;

        for (int j = 0; j < p.length(); j++) {
            if (p[j] == 'R') {
                reversed = !reversed;
            }
            else if (p[j] == 'D') {
                if (dq.empty()) {
                    std::cout << "error\n";
                    err = true;

                    break;
                }

                if (reversed) dq.pop_back();
                else dq.pop_front();
            }
        }

        if (!err) {
            std::cout << '[';

            while (!dq.empty()) {
                if (reversed) {
                    std::cout << dq.back();
                    dq.pop_back();
                }
                else {
                    std::cout << dq.front();
                    dq.pop_front();
                }

                if (!dq.empty())
                    std::cout << ',';
            }

            std::cout << "]\n";
        }
    }

    return 0;
}