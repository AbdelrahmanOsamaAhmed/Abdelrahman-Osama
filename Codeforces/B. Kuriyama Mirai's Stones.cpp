#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    int arr[x];
    int sortedarr[x];
    long long sumi[x];
    long long sortedsumi[x];
    for (int i = 0 ; i < x ; i++){
        cin >> arr[i];
        sortedarr[i] = arr[i];
        if (i==0){
            sumi[i]=arr[i];
            continue;
        }
        sumi[i]=arr[i]+sumi[i-1];
    }
    sort(sortedarr,sortedarr+x);
    for (int i = 0 ; i < x ; i++){
        if (i==0){
            sortedsumi[i]=sortedarr[i];
            continue;
        }
        sortedsumi[i]=sortedarr[i]+sortedsumi[i-1];
    }
    int m; cin >> m;
    while (m--){
        int type; cin >> type;
        int l,r; cin >> l >> r;
        if (type ==1){
            if (l==1){
                cout << sumi[r-1] << endl;
            }
            else cout << sumi[r-1]-sumi[l-2] << endl;
        }
        else {
            if (l==1){
                cout << sortedsumi[r-1] << endl;
            }
            else cout << sortedsumi[r-1]-sortedsumi[l-2] << endl;
        }
    }
}
