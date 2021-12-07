#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long t; cin >> t;
    long long arr[n+1]={0};
    cin >> arr[1];
    for (int i =2 ; i <= n ; i++){
        cin >> arr[i];
        arr[i]+= arr[i-1];
    }
    int l=0,r=1,out=0;
    while (l<=r && r<=n){
        if ((arr[r]-arr[l])<=t){
            if ((r-l)>out){
                out = r-l;
            }
            r++;
        }
        else {
            l++;
        }
    }
    cout << out;
}
