#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i=0;i<S.size();i++) S.at(i) = S.at(i)-32;
    cout << S << endl;
}

