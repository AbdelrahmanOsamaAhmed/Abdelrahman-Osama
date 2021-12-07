#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1001]={0};
    int indx=1;
    int num=1;
    while (num < 1667){
        if (!(num%3==0 || num%10==3)){
            arr[indx++]=num;
        }
        num++;
    }
    int t; cin >> t;
    while (t--){
        int x; cin >> x;
        cout << arr[x] << endl;
    }
}
