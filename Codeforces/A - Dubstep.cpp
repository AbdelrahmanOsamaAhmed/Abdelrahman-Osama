#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    for(int i = 2;i<s.size();i++){
        if(s[i-2]=='W' && s[i-1]=='U' && s[i]=='B'){
            s.erase(s.begin()+(i-2),s.begin()+i+1);
            s.insert(i-2," ");
            i--;
        }
    }
    while(s[0]==' '){s.erase(s.begin());}
    cout << s;
}
