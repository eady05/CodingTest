#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n, 0);
    stack<int> st;
    
    st.push(0); //시작 인덱스
    for(int i=0; i<n; i++){
        //i가 현재 시간 가격
        while(!st.empty()&&prices[st.top()] > prices[i]){ //가격이 떨어진 경우
            int idx = st.top(); st.pop();
            answer[idx] = i - idx;
        }
        st.push(i);
    }
    while(!st.empty()){
        int idx = st.top(); st.pop();
        answer[idx] = n - idx - 1;
    }
    
    return answer;
}
