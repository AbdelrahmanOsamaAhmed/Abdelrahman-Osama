#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n; cin >> n;
	while (n--){
		int arr[3];
		for(int i = 0 ; i < 3 ; i++){
			cin >> arr[i];
		}
		int fin[3]={0};
		if(arr[0]-arr[1] <= 0 || arr[0] - arr[2] <= 0){
			if(arr[2] - arr[0] > arr[1] - arr[0]){
				fin [0] = arr[2] - arr[0] +1;
			}
			else fin[0] = arr[1] - arr[0]+1;
		}
		else fin[0] = 0;

		if(arr[1]-arr[0] <= 0 || arr[1] - arr[2] <=0){
			if(arr[2] - arr[1] > arr[0] - arr[1]){
				fin [1] = arr[2] - arr[1] +1;
			}
			else fin[1] = arr[0] - arr[1]+1;
		}
		else fin[1] = 0;

		if(arr[2]-arr[0] <= 0 || arr[2] - arr[1] <=0){
			if(arr[1] - arr[2] > arr[0] - arr[2]){
				fin [2] = arr[1] - arr[2] +1;
			}
			else fin[2] = arr[0] - arr[2]+1;
		}
		else fin[2] = 0;

		cout << fin[0] << " " << fin[1] << " " << fin[2] << endl;




	}
    
}
