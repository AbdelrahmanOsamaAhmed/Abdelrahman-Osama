#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    cin >> arr[0];
    for (int i = 1 ; i < n ; i++){
        cin >> arr[i];
        arr[i] = arr[i] + arr[i-1];
    }
    int ways =0;
    for (int i = 0 ; i < n-1; i++){
        if (arr[i] == (arr[n-1]-arr[i])){
            ways++;
        }
    }
    cout << ways;
}
