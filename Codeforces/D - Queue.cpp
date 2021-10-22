#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for (int i = 0 ; i < n ; i++){
        cin >> nums[i];
    }
    sort (nums.begin() , nums.end());
    int time=0,counter=0;
    for (int i = 0 ; i < n ; i++){
        if(time <= nums[i]){
            counter++;
            time += nums[i];
        }
        
    }
    cout << counter;
}
