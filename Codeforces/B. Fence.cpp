#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,hole; cin >> x >> hole;
    int arr[x];
    int lastindex,firstIndex=0,finalFirstIndex=1;
    long long sum,dummysum;
    for (int i = 0 ; i < x ; i++){
        cin >> arr[i];
        if (i < hole){
            sum += arr[i];
            lastindex=i;
        }
    }
    dummysum = sum;
    while (++lastindex<x){
        dummysum = dummysum - arr[firstIndex] + arr[lastindex];
        firstIndex++;
        if (dummysum < sum){
            sum = dummysum;
            finalFirstIndex = firstIndex+1;
        }
    }
    cout << finalFirstIndex;
}
