#include <bits/stdc++.h>
using namespace std;
void shift (int* ptr, int shifts){
	while (shifts--){
		for(int i = 0 ; i < 4 ; i++){
			int dummy;
			dummy = ptr[i+1];
			ptr[i+1] = ptr[i];
			ptr[i] = dummy;
		}
	}
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int *ptr = new int[5];
	for (int i = 0 ; i < 5 ; i++){
		cin >> ptr[i];
	}
	int shifts; cin >> shifts;
	shifts = shifts % 5;
	shift(ptr , shifts);
	for (int i = 0 ; i < 5 ; i++){
		cout << ptr[i] << " ";
	}
}
