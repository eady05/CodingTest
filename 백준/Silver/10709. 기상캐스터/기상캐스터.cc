#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int h,w,t;
    char c;
    cin>>h>>w;
    for(int i=0; i<h; i++)
    {
        t=-1;
        for(int j=0; j<w; j++)
        {
            cin>>c;
            if(c == 'c')
            {
                t=0;
            }
            else if(t!=-1)
            {
                t+=1;
            }
            cout<<t<<' ';
        }
        cout<<'\n';
    }
    
    return 0;
}