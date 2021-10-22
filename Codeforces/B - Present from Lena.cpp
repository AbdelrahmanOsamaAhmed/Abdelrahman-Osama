#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n; cin >> n;
    int total = 2*n +1;
    int start = n ,end=n,x=total;
    while (x--){
        int number = 0;
        for (int i = 0 ; i <= end ; i++){
            if (i >= start && i <= end){
                cout << number;
                if (i < end){cout << " ";}
                if(i < n){
                    number++;
                }
                else {number--;}
            }
            else {cout << "  ";}
        }
        if (x > n){
        start--;
        end++;
        }
        else {
            start++;
            end--;
        }
        cout << endl;
    }
}
