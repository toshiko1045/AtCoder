#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    vector<int> X(Q);
    for(int i=0;i<Q;i++) cin >> X.at(i);

    int x;
    bool b;
    for(int i=0;i<Q;i++){
        x = X.at(i);
        b=false;
        for(int j=2;j*j<=x;j++){
            if (x%j==0) b=true;
        }
        if(b) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}
