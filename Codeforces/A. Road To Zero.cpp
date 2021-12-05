#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long x,y,a,b; cin >> x >> y >> a >> b;
        long long sum=0;
        long long dif = abs(x-y);
        long long rem = min(x,y);
        sum += dif*a;
        if (b<=(2*a)){
            sum += rem * b;
        }
        else {
            sum += rem * 2*a;
        }
        cout << sum << endl;
    }
}
