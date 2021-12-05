#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long fir,sec; cin >> fir >> sec;
        long long a = min(fir,sec);
        long long b = max (fir,sec);
        if (a == b){
            cout << 0 << endl;
        }
        else {
            long long counter=0;
            while (a<b){
                a*=2;
                counter++;
            }
            if (a==b){
                long long finCounter=0;
                long long last=0;
                if (counter >= 3){
                    finCounter = counter - (counter%3);
                    counter -= finCounter;
                    last += finCounter/3;
                }
                if (counter >= 2){
                    finCounter = counter - (counter%2);
                    counter -= finCounter;
                    last += finCounter/2;
                }
                cout << last+counter << endl;
            }
            else cout << -1 << endl;
        }
    }
}
