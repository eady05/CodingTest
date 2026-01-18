#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,j,res=0;
    int ap,ps=1,pe; //사과 위치
    cin>>n>>m>>j; //스크린, 바구니, 사과
    pe=ps+m-1;
    for(int i=0; i<j; i++){
        cin>>ap;
        if(ap<ps){
            int gap = ps-ap;
            ps = ps - gap;
            pe = pe - gap;
            res+=gap;
        }
        else if(ap>pe){
            int gap = ap - pe;
            ps = ps + gap;
            pe = pe + gap;
            res+=gap;
        }
    }
    cout<<res<<'\n';
    return 0;
}