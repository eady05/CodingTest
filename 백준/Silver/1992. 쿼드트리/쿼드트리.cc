#include <bits/stdc++.h>
using namespace std;

int n;
string video[64];
string res;

void check_video(int k, int x, int y)
{
    char first = video[y][x];
    bool same = true;

    // 현재 영역이 모두 같은지 검사
    for (int i = y; i < y + k; i++) {
        for (int j = x; j < x + k; j++) {
            if (video[i][j] != first) {
                same = false;
                break;
            }
        }
    }

    // 전부 같으면 값 하나만 출력
    if (same) {
        res += first;
        return;
    }

    // 다르면 분할
    int half = k / 2;
    res += "(";
    check_video(half, x, y);               // 좌상
    check_video(half, x + half, y);        // 우상
    check_video(half, x, y + half);        // 좌하
    check_video(half, x + half, y + half); // 우하
    res += ")";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> video[i];
    }

    check_video(n, 0, 0);
    cout << res;

    return 0;
}
