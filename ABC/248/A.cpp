#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

string S;

int main(){
    cin >> S;
    vector<bool> b = vector<bool>(10,false);
    for(int i=0;i<(int)S.size();i++){
        b[(int)(S.at(i)-'0')] = true;
    }
    for(int i=0;i<(int)b.size();i++){
        if(!b[i]) cout << i << endl;
    }
}