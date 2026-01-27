// C++ 코드를 작성하세요
#include <bits/stdc++.h>
using namespace std;

int h,w;


int main() { 
  cin>>h>>w;
  for(int i=0; i<h; i++){
    string city;
    int cpos = -1;
    cin>>city;
    for(int j=0; j<city.size(); j++){
      if(city[j]=='c'){
        cout<<0<<' ';
        cpos = j;
      }
      else if(cpos!=-1){
        int t = j-cpos;
        cout<<t<<' ';
      }
      else cout<<cpos<<' ';
    }
    cout<<'\n';
  }
  
  return 0; 
}