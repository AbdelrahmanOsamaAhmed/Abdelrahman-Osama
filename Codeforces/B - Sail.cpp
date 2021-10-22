#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,sx,sy,ex,ey; cin >> t >> sx >> sy >> ex >> ey;
    string s; cin >> s;
    int difx = abs(sx - ex) , dify = abs(sy - ey);
    int indx=-1;
    for (int i = 0 ; i < t ; i++){
        if(s[i]=='N'){
            if(sy < ey){
                sy++;
            }
        }
        else if (s[i]=='S'){
            if (sy > ey){
                sy--;
            }
        }
        else if (s[i]=='E'){
            if(sx < ex){
                sx++;
            }
        }
        else if (s[i]=='W'){
            if(sx > ex){
                sx--;
            }
        }
        if (sx == ex && sy == ey){
            indx = i+1;
            break;
        }
    }
    cout << indx;
}
