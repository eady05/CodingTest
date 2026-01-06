#include <bits/stdc++.h>

using namespace std;




int solution(vector<int> scoville, int K) {
    priority_queue<int,vector<int>,greater<>> pq;
    int answer = 0;
    for(int i:scoville) pq.push(i);
    while(pq.size() >= 2 && pq.top() < K){
        int f=pq.top();pq.pop();
        int s=pq.top();pq.pop();
        int n=f+s*2;
        pq.push(n);
        answer+=1;
    }
    if(pq.top()<K) return -1;
    return answer;
}