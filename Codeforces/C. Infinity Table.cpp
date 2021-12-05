#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        long long largerSquare=1;
        while (n > largerSquare*largerSquare){
            largerSquare++;
        }
        if (n==(largerSquare*largerSquare)){
            cout << largerSquare << " " << 1 << endl;
        }
        else {
            long long x = (largerSquare*largerSquare)-largerSquare;
            if (n>x){
                long long col = 1;
                while (col < largerSquare){
                    if (n==((largerSquare*largerSquare)-col)){
                        cout << largerSquare << " " << col+1 << endl;
                        break;
                    }
                    col++;
                }
            }
            else {
                long long row = largerSquare-1;
                while (row>0){
                   if (n==x){
                       cout << row << " " << largerSquare << endl;
                   }
                   row--;
                   x--;
                }
            }
        }
    }
}
