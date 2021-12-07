#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long arr[n];
    long long max=LONG_LONG_MIN;
    cin >> arr[0];
    if (arr[0]>max){
        max=arr[0];
    }
    if (arr[0]<0) arr[0]=0;
    for (int i = 1 ; i < n ; i++){
        cin >> arr[i];
        arr[i]+=arr[i-1];
    if (arr[i]>max){
        max=arr[i];
    }
    if (arr[i]<0) arr[i]=0;
    }
    cout << max;
    
}
