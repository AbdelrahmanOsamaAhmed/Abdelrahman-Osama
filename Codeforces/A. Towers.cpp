#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    int arr[x];
    int freq[1001]={0};
    for (int i = 0 ; i < x;i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int height=1,towers=x;
    for(int i = 0 ; i < 1001; i++){
        if (freq[i]>1){
            towers = towers - freq[i] + 1;
            if (freq[i]>height){
                height=freq[i];
            }
        }
    }
    cout << height << " " << towers;
}
