#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    while (true) {
        string s;
        cin >> s;
        if (s == "end") break;

        bool hasVowel = false;
        bool isPossible = true;
        int vowelCount = 0;    // 연속된 모음 개수
        int consonantCount = 0; // 연속된 자음 개수

        for (int i = 0; i < s.length(); i++) {
            // 1. 모음 포함 여부 체크
            if (isVowel(s[i])) {
                hasVowel = true;
                vowelCount++;
                consonantCount = 0;
            } else {
                consonantCount++;
                vowelCount = 0;
            }

            // 2. 모음/자음 3개 연속 체크
            if (vowelCount >= 3 || consonantCount >= 3) {
                isPossible = false;
            }

            // 3. 같은 글자 연속 체크 (ee, oo 제외)
            if (i > 0 && s[i] == s[i - 1]) {
                if (s[i] != 'e' && s[i] != 'o') {
                    isPossible = false;
                }
            }
        }

        // 최종 판단: 모음이 하나라도 있고, 연속 조건 위반이 없어야 함
        if (isPossible && hasVowel) {
            cout << "<" << s << "> is acceptable." << "\n";
        } else {
            cout << "<" << s << "> is not acceptable." << "\n";
        }
    }

    return 0;
}