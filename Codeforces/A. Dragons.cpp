#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s, n; cin >> s >> n;
    bool flag = true;
    vector<pair<int,int>>drags(n);
    for(int i = 0 ; i < n ; i++){
        cin >> drags[i].first >> drags[i].second;
    }
    sort(drags.begin(),drags.end());
    for (int i = 0 ; i < n ; i++){
        if(s<= drags[i].first){
            cout << "NO";
            flag= false;
            break;
        }
        s+= drags[i].second;
    }
    if(flag) cout << "YES";
}
 
