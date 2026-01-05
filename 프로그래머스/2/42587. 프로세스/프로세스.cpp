#include <bits/stdc++.h>

using namespace std;

deque<pair<int,int>> lq;
int order;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    for(int i=0; i<priorities.size(); i++) lq.push_back({i,priorities[i]});
    
    while(!lq.empty()){
        auto s = lq.front(); lq.pop_front();
        int flag=1;
        for(int i=0; i<lq.size(); i++){
            if(lq[i].second>s.second) {
                lq.push_back(s);
                flag=0;
                break;
            }
        }
        if(flag) {
            order+=1;
            if(s.first == location) {
                answer = order;
                break;
            }
        }
        
    }
    
    return answer;
}