#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,d; cin >> x;
    int sum [x+1]={0};
    for (int i = 1 ; i <= x; i++){
        cin >> d;
        sum[i] = sum[i-1] + d;
    }
    int counter = 0;
    for (int i = 1; i < x ; i++){
        if (sum[i]==(sum[x]-sum[i])){
            counter++;
        }
    }
    cout << counter;
    
}
