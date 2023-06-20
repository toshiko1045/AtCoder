#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

double a,b,c,x;

int main(){
    cin >> a >> b >> c >> x;
    
    if(x<=a) cout << 1. << endl;
    else if(x<=b) cout << (c/(b-a)) << endl;
    else cout << 0. << endl;
}