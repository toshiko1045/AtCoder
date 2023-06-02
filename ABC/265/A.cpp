#include <bits/stdc++.h>
using namespace std;

int X,Y,N;

int main(){
    cin >> X >> Y >> N;
    int m3 = min(X*3,Y);

    int r = m3*(N/3) + X*(N%3);

    cout << r << endl;
}