#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll anna =0;
        if(c%2!=0){
            anna += a+((c/2)+1);
        }
        else{
            anna += a+(c/2);
            }
        ll katie = b+(c/2);
        cout << (anna>katie?"First":"Second")<<endl;
    }
    return 0;
}
