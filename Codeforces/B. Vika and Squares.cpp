#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long min = LONG_LONG_MAX;
    long long arr[n];
    vector<int>index;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
        if (arr[i]<=min){
            min = arr[i];
        }
    }
    for (int i = 0 ; i < n ; i++){
        if (arr[i]==min){
            index.push_back(i);
        }
    }
    long long maxi=0;
    index.push_back(index[0]+n);
    for (int i = 1 ; i < index.size();i++){
        if (index[i]-index[i-1]-1>maxi){
            maxi=index[i]-index[i-1]-1;
        }
    }
    long long counter=0;
    counter = maxi + min*n;
    cout << counter;
}
