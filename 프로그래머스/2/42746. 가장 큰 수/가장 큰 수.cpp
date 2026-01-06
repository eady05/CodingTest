#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> ns;
    for (int n : numbers)
        ns.push_back(to_string(n));

    sort(ns.begin(), ns.end(), cmp);

    // 가장 큰 값이 0이면 전체가 0
    if (ns[0] == "0") return "0";

    string answer = "";
    for (string s : ns)
        answer += s;

    return answer;
}
