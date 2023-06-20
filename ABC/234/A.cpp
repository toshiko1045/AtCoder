#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int t;

int f(int x){
    return x*x + 2*x + 3;
}

int main(){
    cin >> t;
    cout << f(f(f(t)+t) + f(f(t))) << endl;
}