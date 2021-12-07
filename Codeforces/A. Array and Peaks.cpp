#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n,p; cin >> n >> p;
        if ((2*p+1)<=n){
            cout << 1 << " ";
            int max=n, min=2;
            while (p--){
                cout << max-- << " " << min++ << " ";
            }
            while (min <= max){
                cout << min++ << " ";
            }
            cout << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}
