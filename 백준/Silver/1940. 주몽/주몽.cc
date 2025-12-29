#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
vector<int>v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, m,left,right,cnt=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    left = 0;
    right = v.size() - 1;
    while (left<right)
    {
        if (v[left] + v[right] == m)
        {
            right--;
            left++;
            cnt++;
        }
        else if (v[left] + v[right] < m)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << cnt;
    return 0;
}