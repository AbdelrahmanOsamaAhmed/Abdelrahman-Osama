#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ten=1,counter=0;
        vector<int>num;
        while (n>0){
            int x = n%10;
            num.push_back(x);
            n=n/10;
        }
        vector<int>y;
        for (int i = 0 ; i < num.size(); i++){
            if (num[i]!=0){
                y.push_back(num[i]*pow(10,i));
                counter++;
            }
        }
        cout << counter << endl;
        for (auto i : y){
            cout << i << " ";
        }
        cout << endl;   
    }
}
