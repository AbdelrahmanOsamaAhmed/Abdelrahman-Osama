#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    string s; cin >> s;
    bool arr[26]={false};
    bool c = true;
    for (int i = 0 ; i < x ; i++){
       arr[tolower(s[i])-'a']=true; 
    }
    for (int i = 0 ; i < 26; i++){
        if (!arr[i]){
            cout << "NO";
            c = false;
            break;
        }
    }
    if (c) cout << "YES";
}
