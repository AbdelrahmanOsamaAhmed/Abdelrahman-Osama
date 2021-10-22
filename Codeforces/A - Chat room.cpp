#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    string h = "hello";
    int j=0;
    for(char i : s){
        if(i==h[j]){
            j++;
        }
        if(j==5) break;
    }
    if(j==5)cout<<"YES";
    else cout<<"NO";
}
