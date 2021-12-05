#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int sumSeraj=0,sumDima=0;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int rightMost=n-1,leftMost=0;
    bool seraj=true;
    while (rightMost>=leftMost){
        int t;
        if (arr[rightMost]>arr[leftMost]){
            t=rightMost;
            rightMost--;
        }
        else {t = leftMost;
                leftMost++;}
        if (seraj){
            sumSeraj+=arr[t];
        }
        else sumDima += arr[t];


        seraj= !seraj;
    }
    cout << sumSeraj << " " << sumDima;
}
