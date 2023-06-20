#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int a,b;

int main(){
    cin >> a >> b;

    if(b-a==1 || (b==10 && a==1)) cout << "Yes" << endl;
    else cout << "No" << endl;
}