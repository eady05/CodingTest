#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        string s;
        getline(cin, s);
        if(s == ".") break;

        vector<char> v;
        bool ok = true;
        for(char c : s)
        {
            if(c == '(' || c == '[')
            {
                v.push_back(c);
            }
            else if(c == ')')
            {
                if(!v.empty() && v.back() == '(')
                    v.pop_back();
                else
                {
                    ok = false;
                    break;
                }
            }
            else if(c == ']')
            {
                if(!v.empty() && v.back() == '[')
                    v.pop_back();
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok && v.empty()) cout << "yes\n";
        else cout << "no\n";
    }
}