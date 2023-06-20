#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int a,b,c,d;

int main(){
    cin >> a >> b >> c >> d;
    if(a*60+b <= c*60+d){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }
}