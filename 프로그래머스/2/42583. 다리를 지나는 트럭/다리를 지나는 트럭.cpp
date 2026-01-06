#include <bits/stdc++.h>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    deque<int> bridge;
    int cur_weight = 0;

    // 다리 초기화
    for (int i = 0; i < bridge_length; i++)
        bridge.push_back(0);
    int idx = 0; // 다음에 올라갈 트럭 인덱스

    while (idx < truck_weights.size()) {
        answer++;

        // 1️⃣ 다리에서 트럭 내려감
        cur_weight -= bridge.front();
        bridge.pop_front();

        // 2️⃣ 다음 트럭 올릴 수 있으면
        if (cur_weight + truck_weights[idx] <= weight) {
            bridge.push_back(truck_weights[idx]);
            cur_weight += truck_weights[idx];
            idx++;
        } else {
            // 못 올리면 빈칸
            bridge.push_back(0);
        }
    }
     // 마지막 트럭이 다리를 완전히 건너는 시간
    answer += bridge_length;

    return answer;
}