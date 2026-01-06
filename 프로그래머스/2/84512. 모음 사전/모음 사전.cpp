#include <bits/stdc++.h>
using namespace std;

vector<string> dict;
string vowels = "AEIOU";

void dfs(string s) {
    if (s.size() == 5) return;
    for (char c : vowels) {
        string next = s + c;
        dict.push_back(next);
        dfs(next);
    }
}

int solution(string word) {
    dfs("");
    sort(dict.begin(), dict.end());
    for(int i=0; i< dict.size(); i++){
        if(word == dict[i]) {
            int s=i+1; 
            return s;
        }
    }
    
}
