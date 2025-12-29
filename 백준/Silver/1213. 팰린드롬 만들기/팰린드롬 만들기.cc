#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int alpha[26], cnt=0;
string pelin="", new_pelin;
char s;

int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);cout.tie(NULL);
  cin>>pelin;
  for(int i=0; i<pelin.length(); i++){
    int k = pelin[i] - 'A';
    alpha[k]++;
  }
  for(int i=0; i<26; i++){
    char np = i+'A';
    for(int j=0;j<alpha[i]/2;j++) new_pelin+=np;
    if(alpha[i]%2==1) {
      cnt++;
      s = np;
    }
  }
  if(cnt>1) cout<<"I'm Sorry Hansoo";
  else{
    string new_pelin2 = new_pelin;
    reverse(new_pelin2.begin(), new_pelin2.end());
    if(s) new_pelin+=s+new_pelin2;
    else new_pelin+=new_pelin2;
    cout<<new_pelin;
  }
  return 0;
}