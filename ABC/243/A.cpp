#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int V,A,B,C;

int main(){
    cin >> V >> A >> B >> C;
    V = V%(A+B+C);

    if(V<A)cout << "F" << endl;
    else if(V<A+B) cout << "M" << endl;
    else cout << "T" << endl;
}