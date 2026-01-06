#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> triangle) {
    int n = triangle.size();

    vector<vector<int>> dp(n);

    dp[0].push_back(triangle[0][0]);

    for(int i = 1; i < n; i++){
        dp[i].resize(triangle[i].size());
        for(int j = 0; j < triangle[i].size(); j++){
            if(j == 0)
                dp[i][j] = dp[i-1][j] + triangle[i][j];
            else if(j == triangle[i].size()-1)
                dp[i][j] = dp[i-1][j-1] + triangle[i][j];
            else
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
        }
    }

    return *max_element(dp[n-1].begin(), dp[n-1].end());
}
