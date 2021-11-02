#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n; cin >> n;
    string arr[n];
    for(int i = 0 ; i < n;i++){
        cin >> arr[i];
    }
    char up,down,right,left;
    bool flag = true;
    for(int i = 0 ; i < n ; i++){
                    int counter=0;
 
        for (int j = 0 ; j < n ;j++){
            
            if(i==0){
                up='c';
            }
            else up = arr[i-1][j];
 
            if (i==n-1){
                down = 'c';
            }
            else down = arr[i+1][j];
 
            if(j==0){
                left = 'c';
            }
            else left = arr[i][j-1];
            
 
            if(j==n-1){
                right = 'c';
            }
            else right = arr[i][j+1];
 
            if (right=='o'){
                counter++;
            }
            if (left=='o'){
                counter++;
            }
            if (up=='o'){
                counter++;
            }
            if (down=='o'){
                counter++;
            }
            if (counter%2 != 0){
                flag = false;
            }
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
        
    
}
