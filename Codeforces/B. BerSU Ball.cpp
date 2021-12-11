#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n;
    int boys[n];
    for (int i = 0 ; i < n ; i++){
        cin >> boys[i];
    }
    sort(boys,boys+n);
    cin >> m; 
    int girls[m];
    for (int i = 0 ; i < m ; i++){
        cin >> girls[i];
    }
    sort(girls,girls+m);
    int b=0,g=0,c=0;
    while (b<n && g<m){
        if (abs(boys[b]-girls[g])<=1){
            c++;
            b++;
            g++;
        }
        else {
            if (boys[b]>girls[g]){
                g++;
            }
            else if (boys[b]<girls[g]){
                b++;
            }
        }
    }
    cout << c;
}
