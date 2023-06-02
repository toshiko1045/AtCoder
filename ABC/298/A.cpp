#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int r=0;
    int h=0;
    bool b=false;
    for(int i=0;i<N;i++){
        if(S.at(i)=='o') r++;
        if(S.at(i)=='x') {
            h=1;
            b=false;
            break;
        }
    }
    if(r>=1 && h!=1) b=true;
    if(b) cout << "Yes" << endl;
    else cout << "No" << endl;
}