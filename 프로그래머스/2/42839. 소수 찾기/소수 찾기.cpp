#include <string>
#include <vector>
#include <set>

using namespace std;

set<int> s;
vector<bool> used;
string nums;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void dfs(string cur) {
    if (!cur.empty()) {
        int n = stoi(cur);
        if (isPrime(n)) s.insert(n);
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        used[i] = true;
        dfs(cur + nums[i]);
        used[i] = false;
    }
}

int solution(string numbers) {
    nums = numbers;
    used.assign(numbers.size(), false);

    dfs("");
    return s.size();
}
