#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[26]={0};
    char c;
    bool f=true;
    if (n==1){
        f=false;
    }
    while (n--){
        cin >> c;
        arr[c - 'a']++;
        if (arr[c-'a']>=2){
            f=false;
            break;
        }
    }
    if (!f){
        cout << "Yes";
    }
    else cout << "No";
}
