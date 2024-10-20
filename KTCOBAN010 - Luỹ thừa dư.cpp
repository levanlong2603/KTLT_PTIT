#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        ll a, n; cin >> a >> n;
        ll res = 1;
        while(n > 0){
            if(n % 2) res = ( res * a) % mod;
            a = (a * a) % mod;
            n /= 2;
        }
        cout << res << endl;
    }
    return 0;
}
