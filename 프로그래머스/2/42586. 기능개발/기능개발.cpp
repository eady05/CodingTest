#include<bits/stdc++.h>

using namespace std;

pair<int,int>mx;
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int len = progresses.size();
    for(int i=0; i<len; i++){
        int k = (100 - progresses[i]) / speeds[i];
        if((100 - progresses[i]) % speeds[i]) k+=1;
        
        if(mx.first<k) {
            if(mx.second) answer.push_back(mx.second);
            mx={k,1};
        }
        else {
            mx.second+=1;
        }
        if(i==len-1) answer.push_back(mx.second);
    }
    return answer;
}