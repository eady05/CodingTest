#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int alph[26], n;
string s, ret;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s;
    alph[s[0]-'a']++;
  }
  for(int j=0; j<26; j++) if(alph[j]>=5) ret += (j + 'a');
  if(ret.size()) cout<<ret<<"\n";
  else cout<<"PREDAJA"<<"\n";
  return 0;
}