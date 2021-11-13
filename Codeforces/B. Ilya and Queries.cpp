#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int arr[s.size()]={0};
    for (int i = 1 ; i < s.size();i++){
        arr[i] = arr[i-1];
        if (s[i]==s[i-1]){
            arr[i]++;
        }
    }
    int t; cin >> t;
    while (t--){
        int l,r; cin >> l >> r;
        if (l == 1) {
            cout << arr[r-1] << endl; 
            continue;
        }
        cout << arr[r-1]-arr[l-1] << endl;
    }
}
