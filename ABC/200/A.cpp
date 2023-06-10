#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;

int main(){
    cin >> N;
    if(N%100==0) cout << N/100 << endl;
    else cout << N/100 + 1 << endl;
}