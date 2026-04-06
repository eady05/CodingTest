#include <bits/stdc++.h>
using namespace std;

vector<int>v[10001];
int visited[10001];
int cnt[10001];
int n,m,a,b,mx;

int dfs(int s){
    visited[s] = 1;
    int ret=1;
    for(int i=0; i<v[s].size(); i++){
        int ns = v[s][i];
        if(visited[ns]==0){
            ret += dfs(ns);
        }
    }
    return ret;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        v[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        fill(&visited[0],&visited[0]+10001, 0);
        cnt[i] = dfs(i);
        mx = max(mx,cnt[i]);
    }
    for(int i=1; i<=n; i++){
        if(mx == cnt[i]) cout<<i<<' ';
    }
}
