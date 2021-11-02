#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int k,n; cin >> k >> n;
    int freq[26]={0};
    string s; cin >> s;
    for (int i = 0 ; i < s.size() ; i++){
        freq[s[i]-'A']++;
    }
    sort (freq,freq+26,greater<int>());
    long long coins= 0;
    for (int i = 0 ; i <26;i++){
        if(freq[i]<=n){
            coins += (long long)freq[i] * (long long)freq[i];
            n -= freq[i];
        }
        else {
            coins += (long long)n* (long long)n;
            break;
        }

    }
    cout << coins;
}
