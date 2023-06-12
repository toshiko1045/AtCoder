#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    double N;
    cin >> N;
    double r=0;
    for(int i=1;i<=N;i++){
        r += (i*10000)/N;
    }
    cout << r << endl;
}