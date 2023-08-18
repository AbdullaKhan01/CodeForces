#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll tt;
    cin >> tt;
    while(tt--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        if(n==1)
            cout << 0 << endl;
        else if(n==2 || n==3)
            cout <<  arr[n-1]-arr[0] << endl;
        else
            {
                int sum = 0;
                for(int i=0;i<n/2;i++){
                    sum += (arr[n-i-1] - arr[i]);
                }
                cout << sum << endl;
            }
    }
    return 0;
}
