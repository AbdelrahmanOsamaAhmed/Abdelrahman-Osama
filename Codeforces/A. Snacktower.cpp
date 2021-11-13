#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    int arr[x+1];
    bool here [x+1]={false};
    for (int i = 1 ; i <= x ; i++){
        cin >> arr[i];
    }
    int c = x;
    for (int i = 1 ; i <= x ; i++){
        here[arr[i]] = true;
        while (here[c] && c>0){
            cout << c-- << " ";
        }
        cout << endl;
    }
    
}
