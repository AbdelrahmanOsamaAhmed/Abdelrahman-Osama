#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,x; cin >> n;
	x=n;
	int arr[n];
	while(x--){
		cin >> arr[x];
	}
	sort(arr, arr+n);
	int c = arr[0] , counter = 1;
	for(int i = 1 ;i < n;i++){
		if(arr[i]==c) counter++;
	}
	if(counter%2==0) cout << "Unlucky";
	else cout << "Lucky";
}
