#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    transform(s.begin(), s.end(),s.begin(),::tolower);
    for (int i = 0 ; i < s.size(); i++){
        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            s.erase(s.begin()+i);
            i--;
        }
    }
    for(int i = 0 ; i < s.size(); i++){
        cout << "." << s[i];
    }
}
