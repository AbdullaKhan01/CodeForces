#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10||b+c>=10||a+c>=10){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
