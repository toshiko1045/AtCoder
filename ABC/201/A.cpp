#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int a1,a2,a3;

int main(){
    cin >> a1 >> a2 >> a3;

    if(a3-a2==a2-a1) cout << "Yes" << endl;
    else if(a3-a1==a1-a2) cout << "Yes" << endl;
    else if(a2-a3==a3-a1) cout << "Yes" << endl;
    else if(a2-a1==a1-a3) cout << "Yes" << endl;
    else if(a1-a3==a3-a2) cout << "Yes" << endl;
    else if(a1-a2==a2-a3) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}