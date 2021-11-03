#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s; cin >> s;
    int arr[26]={0};
    for (int i = 0 ; i < s.size(); i++){
        arr[s[i]-'a']++;
    }
    bool flag = true;
    for (int i = 0 ; i < 26 ; i++){
        if (arr[i]%t != 0 && arr[i] != 0){
            cout << -1;
            flag = false;
            break;
        }
    }
    if (flag){
        for (int j = 0 ; j < t ; j++){
            for (int i = 0 ; i < 26 ; i++){
                if (arr[i]%t==0){
                    char x = i + 'a';
                    int rep = arr[i]/t;
                    while (rep--){cout << x;}
                }
            }
        }
    }
}
