#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll a , ll b){
    if(a%2!=0){
        if(b%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        // if((a%2==0)||(a%b==0)|| ((a%b)%2==0)){
        //     cout << "YES" << endl;
        // }
        // else{
        //     cout << "NO" << endl;
        // }
        if(check(a,b)){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
