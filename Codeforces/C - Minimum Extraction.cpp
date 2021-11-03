#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<long long>arr;
        for(int i = 0 ; i < n;i++){
            long long x; cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        long long min = arr[arr.size()-1];
        if(arr.size()==1){
            cout << arr[0] << endl;
        }
        else {
            for (int i = 0 ; i < arr.size()-1;i++){
                arr[i] = arr[i] - arr[i+1];
                if(arr[i]>min){
                    min = arr[i];
                }
            }
            cout << min << endl;;
        }
    }
}
