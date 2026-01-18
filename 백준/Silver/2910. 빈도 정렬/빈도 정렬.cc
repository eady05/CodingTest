#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool compare(pair<ll,ll> a, pair<ll,ll> b){
    return a.second > b.second;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<pair<ll,ll>> vp;
    int n,c,m;
    cin>>n>>c;
    for(int i=0; i<n; i++){
        int flag=1;
        cin>>m;
        for(int i=0; i<vp.size(); i++) {
            if(vp[i].first == m){
                vp[i].second++;
                flag=0;
            }
        }
        if(flag) vp.push_back({m,1});
    }
    stable_sort(vp.begin(), vp.end(), compare);

    for(auto a: vp){
        for(int i=0; i<a.second; i++) cout<< a.first <<' ';
    }
    
    return 0;
}