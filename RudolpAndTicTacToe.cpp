#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll count = 0;
        while(n--){
        ll a,b;
        cin>>a>>b;
        count += ((a-b)>=1)?1:0;
        }
        cout << count << endl;
    }
    return 0;
}
