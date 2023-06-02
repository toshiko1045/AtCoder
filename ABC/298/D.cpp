#include <bits/stdc++.h>
using namespace std;

int main(){
    long long Q;
    cin >> Q;
    string S="1";

    int q;
    string x;
    for(int i=0;i<Q;i++){
        cin >> q;
        if(q==1){
            cin >> x;
            S += x;
        }else if(q==2){
            S.erase(0,1);
        }else if(q==3){
            cout << stoll(S)%998244353 << endl;
        }
    }
}