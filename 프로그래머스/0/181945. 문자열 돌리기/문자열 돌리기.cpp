#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int a; a<str.length(); a++) cout<<str[a]<<'\n';
    return 0;
}