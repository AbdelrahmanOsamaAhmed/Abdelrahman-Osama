#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,median,l,r; cin >> size;
    string s; cin >> s;
    int n = size;
    char c[size];
    if (n%2!=0){
        c[n/2]=s[0];
        n--;
        s.erase(s.begin()+0);
        l = (n/2)-1;
        r = (n/2)+1;
        
    }
    else {
         l = (n/2)-1;
         r = (n/2);
    }
    while (s.size()>0){
            c[l]=s[0];
            s.erase(s.begin()+0);
            c[r]=s[0];
            s.erase(s.begin()+0);
            l--;
            r++;
        }
        for (int i = 0 ; i < size; i++){
            cout << c[i];
        }   
}
