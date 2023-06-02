#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t A,B;
    cin >> A >> B;

    int cnt = 0;
    int64_t t_gcd;
    int64_t a=A;
    int64_t b=B;
    while(true){
        t_gcd = gcd(a,b);
        a -= t_gcd;
        b -= t_gcd;
        cnt += 1;
        if(a<1||b<1) break;
    }
    cout << cnt << endl;
}