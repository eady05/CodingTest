#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    const int MOD = 1234567;
    vector<int> arr = {0, 1};
    for(int i=0; i<n-1; i++){
        int k = (arr[i] + arr[i + 1]) % MOD;
        arr.push_back(k);
    }
    answer = arr[n];
    return answer;
}