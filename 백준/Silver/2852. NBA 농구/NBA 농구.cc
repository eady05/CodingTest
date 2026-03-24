#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int c,t,prev=0;
    int score[3]={0},time[3]={0};
    string s;
    cin>>c;
    for(int i=0; i<c; i++)
    {
        cin>>t>>s;
        int m = stoi(s.substr(0, s.find(':')));
        int sec = stoi(s.substr(s.find(':') + 1));
        int now = m * 60 + sec;
        int gap = now - prev;
        if(score[1]>score[2]) time[1] += gap;
        else if(score[1]<score[2]) time[2] += gap;
        prev = now;
        score[t]++;
    }
    int e = 48*60;
    if(score[1]>score[2]) time[1] += e-prev;
    else if(score[1]<score[2]) time[2] += e-prev;
    
    for(int i=1; i<3; i++)
    {
        int m = time[i]/60;
        int sec = time[i]%60;
        string o = "";
        if(m<10) 
        {
            o+='0';
        }
        o+=to_string(m);
        o+=':';
        if(sec<10)
        {
            o+='0';
        }
        o+=to_string(sec);
        cout<<o<<'\n';
    }
}