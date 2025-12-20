#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    //대문자<소문자;
    int gap = 'a' - 'A';
    for(int i=0; i < str.length(); i++){
        if(str[i]<'a'){
            char ans1 = str[i]+gap;
            cout<<ans1;
        }else{
            char ans2 = str[i]-gap;
            cout<<ans2;
        }
    }
    return 0;
}