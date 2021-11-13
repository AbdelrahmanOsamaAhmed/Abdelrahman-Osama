#include <bits/stdc++.h>
using namespace std;
int main() {
    int x; cin >> x;
    int enter[x+1];
    int out[x+1];
    for (int i = 1 ; i <= x; i++){
        cin >> enter[i];
    }
    for (int i = 1 ; i <= x; i++){
        cin >> out[i];
    }
    int fin=0;
    int i=1,j=1;
    int finned[x+1]={0};
    while (i<=x , j<=x){
        if(enter[i]==out[j]){
            i++;
            j++;
        }
        else if (finned[enter[i]] != 0){
            i++;
        }
        else if ((enter[i]!= out[j]) && (finned[out[j]] == 0))
        {
           finned[out[j]] = 1;
           fin++;
           j++; 
        }
    }
    cout << fin;
}
