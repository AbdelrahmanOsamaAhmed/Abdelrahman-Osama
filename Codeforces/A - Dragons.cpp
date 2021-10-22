#include <bits/stdc++.h>
using namespace std;
int main() {
    int s; cin >> s;
    int n; cin >> n;
    vector<int> str(n);
    vector<int> bonus(n);
    vector<int>status(n, 0);
    bool last=false;
    for(int i = 0 ; i<n;i++){
        cin>>str[i] >> bonus[i];
    }
    int x = n;
    while (x--){
        if(s>str[x]&&status[x]==0){
            s+=bonus[x];
            status[x]=1;
            x=n;
        }
    }
    for(int i = 0;i<n;i++){
        if(status[i]==0){
            cout<<"NO\n";
            last=true;
            break;
        }
    }
    if(!last) cout << "YES\n";
}
