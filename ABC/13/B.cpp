#include <bits/stdc++.h>
using namespace std;

int a,b,b1,b2,r;

int main(){
    cin >> a >> b;
    a += 10;
    b1 = b;
    b += 10;
    b2 = b + 10;
    r = min(abs(a-b),min(b2-a,a-b1));
    cout << r << endl;
    return 0;
}