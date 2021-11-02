#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,q;
    cin >> n >> q;
    int freq[n+1]={0};
    int type[q],num[q];
    for (int i=0;i<q;i++){
        cin >> type[i] >> num[i];
        if (type[i] == 1){
            freq[num[i]]++;
        }
        else {
            cout << freq[num[i]] << endl;
        }
    }    
}
