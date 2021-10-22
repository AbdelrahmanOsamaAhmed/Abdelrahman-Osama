#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,x;
    cin>> n;
    if(n>36){
        cout<<-1;
    }
    else{
    x=n/2;
    if(n%2!=0){
        cout<<6;
        x=(n-1)/2;
    }
        while(x--){
            cout<<8;
        }
    }
 
 
    return 0;
}
