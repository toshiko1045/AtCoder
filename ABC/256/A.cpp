#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll powll(ll x, ll y){
    ll r = 1;
    for(int i=0;i<y;i++) r*=x;
    return r;
}

ll N,r=2;

int main(){
    cin >> N;
    cout << powll(r,N) << endl;
}