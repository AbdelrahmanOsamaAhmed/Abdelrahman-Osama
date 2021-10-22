#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    char alpha[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int start,end=0,dis=0;
    for(char i : s){
        for(int j = 0 ; j<26;j++){
            if(i==alpha[j]){
                start = end;
                end = j;
                int dummy = end - start;
                if(dummy<0){
                    dummy = abs(dummy);
                }
                if(dummy>13){
                    dummy = 26 - dummy;
                }
                dis+= dummy;
                }
            }

        }
    cout << dis;
}
