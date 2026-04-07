#include <bits/stdc++.h>
using namespace std;
int n;
stack<int>s;
int a[1000005],ret[1000005];

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    fill(&ret[0],&ret[0]+1000005, -1);
    for(int i=0; i<n; i++){
        cin>>a[i];
        while(s.size()&&a[s.top()]<a[i]){
            ret[s.top()] = a[i]; s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<n; i++) cout<<ret[i]<<' ';
    return 0;
}
