#include <bits/stdc++.h>
using namespace std;

long long A,B,R;

int main(){
    cin >> A >> B;
    R = A/B ;
    if(R*B != A) R++;
    cout << R << endl;
}