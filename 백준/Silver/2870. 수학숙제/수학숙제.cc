// C++ 코드를 작성하세요
#include <bits/stdc++.h>
using namespace std;

vector<string> sv;
void go(string ns){
  while(true){
    if(ns.size() && ns.front() == '0') ns.erase(ns.begin());
    else break;
  }
  if(ns.size() == 0) ns = "0";
  sv.push_back(ns);
}

bool cmp(string a, string b){
  if(a.size()==b.size()) return a<b;
  return a.size()<b.size();
}

int main() { 
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n;
  string s;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s;
    string ns="";
    for(int j=0; j<s.size(); j++){
      if(s[j]>='0' && s[j]<='9'){
        ns+=s[j];
      }
      else if(ns!="") {
        go(ns);
        ns="";
      }
    }
    if(ns!="") go(ns);
  }
  sort(sv.begin(),sv.end(),cmp);
  for(string ss:sv)cout<<ss<<'\n';
  return 0; 
}