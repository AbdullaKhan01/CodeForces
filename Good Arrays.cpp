#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n ;
        cin >> n;
        vector<ll>vec(n);
        ll sum = 0,count = 0;
        for(int i = 0; i < n ; i++){
            cin >> vec[i];
            sum+=vec[i];
            if(vec[i] == 1) count ++;
        }
        if(sum >= count + n && n > 1 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
} 
