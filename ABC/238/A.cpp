#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

double n;

int main(){
    cin >> n;
    if(pow(2.,n)>pow(n,2.)) cout << "Yes" << endl;
    else cout << "No" << endl;
}