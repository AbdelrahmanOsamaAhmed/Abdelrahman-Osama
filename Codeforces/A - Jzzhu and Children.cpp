#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    vector<int>children(n);
    vector<int>indices(n);
    int last , x = 0;
    for (int i = 0 ; i < n ; i++){
        cin >> children[i];
        indices[i] = i+1;
    }
    while (x < children.size()){
        if (m < children[x]){
            children.push_back(children[x]- m);
            indices.push_back(indices[x]);
        }
        x++;
    }
    cout << indices[indices.size() -1];

}
