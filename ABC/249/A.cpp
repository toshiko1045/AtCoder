#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int a,b,c,d,e,f,x;

int main(){
    cin >> a >> b >> c >> d >> e >> f >> x;

    int taka = b*a*(x/(a+c)) + b*(min(a,x%(a+c))) ;
    int aoki = e*d*(x/(d+f)) + e*(min(d,x%(d+f))) ;

    if(taka<aoki) cout << "Aoki" << endl;
    else if(taka>aoki)cout << "Takahashi" << endl;
    else cout << "Draw" << endl;
}