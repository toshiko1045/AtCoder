#include <bits/stdc++.h>
using namespace std;

int Q;
stack<string> S;
int main(){
    cin >> Q;

    int q;
    string s;
    for(int i=0;i<Q;i++){
        cin >> q;
        if(q==1){
            cin >> s;
            S.push(s);
        }else if(q==2){
            cout << S.top() << endl;
        }else {
            S.pop();
        }
    }
}