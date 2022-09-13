#include <iostream>
#include <string>

int main() {
    std::string S;
    std::string T = "ATCG";
    std::cin >> S;

    int N = S.length();

    int ans = 0;
    for (int l = 0; l < N; ++l) {
        for (int r = l; r < N; ++r) {
            for (int x = l; l < r + 1; ++x) {
                if (T.find(S[x]) != std::string::npos) {
                    
                }
            }

        }
    }
}