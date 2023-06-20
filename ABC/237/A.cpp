#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

double n;

int main(){
    cin >> n;
    if(n>=-1*pow(2.,31.) && n<pow(2.,31.)) cout << "Yes" << endl;
    else cout << "No" << endl;
}