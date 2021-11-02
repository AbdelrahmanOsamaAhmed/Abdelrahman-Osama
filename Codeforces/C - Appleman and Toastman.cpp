#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n; cin >> n;
    vector<long long>arr(n);
    long long sum = 0;
    for (int i = 0 ; i < n;i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    sort (arr.begin(),arr.end());
    long long score =sum;
    for(int i = 0 ; i < n-1;i++){
        score += sum;
        sum -= arr[i];
    }
    cout << score;

}
