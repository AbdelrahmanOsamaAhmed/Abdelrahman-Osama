#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin>>s;
    bool alpha[26]={false};
    int counter = 0;
    for(char i : s){
        if(!alpha[i - 'a']){
            alpha[i-'a']= true;
            counter++;
        }
    }
    if(counter%2!=0){
        cout <<  "IGNORE HIM!";
    }
    else cout << "CHAT WITH HER!";
}
