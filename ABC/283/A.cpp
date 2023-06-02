#include <bits/stdc++.h>
using namespace std;

int A,B;

int main(){
    cin >> A >> B;

    int r=1;
    for(int i=1;i<=B;i++) r*=A;
    cout << r << endl;
    return 0;
}