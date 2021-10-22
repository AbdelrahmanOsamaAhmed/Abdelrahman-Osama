#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a; cin >> n;
    int nums[100001];
    for (int i = 1 ; i <= n ; i ++){
        cin >> a;
        nums[a] = i;
    }
    int q; cin >> q;
    long long vensya = 0 , petya = 0;
    int b;
    for (int i = 0 ; i < q ; i++){
        cin >> b;
        vensya+= nums[b];
        petya += n + 1 - nums[b];
    }
    
    cout << vensya << " " << petya;
    
}
