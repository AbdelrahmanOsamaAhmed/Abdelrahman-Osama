#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    string s; cin >> s;
    int arr[26]={0};
    for (int i = 0 ; i < x; i++){
        arr[s[i]-'a']++;
    }
    int changes=0;
    for (int i = 0 ; i < 26 ; i++){
        if(arr[i]>1){
            changes += arr[i]-1;
        }
    }
    if (x > 26){
        changes = -1;
    }
    cout << changes;
}
