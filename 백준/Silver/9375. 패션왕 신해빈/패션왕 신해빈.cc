#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m;
string s1,s2;

int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);cout.tie(NULL);
  cin>>n;
  for(int i=0; i<n; i++){
    map<string,int> mp;
    cin>>m;
    long long num=1;
    for(int j=0; j<m; j++){
      cin>>s1>>s2;
      mp[s2]+=1;
    }
    for(auto iter: mp){
      num*=((long long)iter.second + 1);
    }
    cout<< num-1<<"\n";
  }
  return 0;
}