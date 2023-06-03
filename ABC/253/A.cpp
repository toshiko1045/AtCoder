#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int a,b,c;

int main(){
    cin >> a >> b >> c;
    if((a>=b && b>=c)||(a<=b && b<=c)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}