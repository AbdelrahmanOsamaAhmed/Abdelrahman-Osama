#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int x;
    vector<int>arr;
    map<int,int>bars;
    for (int i = 0 ; i < n ; i++){
        cin >> x;
        bars[x]++;
        if (bars[x] ==1){
            arr.push_back(x);
        }
    }
    int min = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        if (bars[arr[i]]>min){
            min = bars[arr[i]];
        }
    }
    cout << min << " " << arr.size();
}
