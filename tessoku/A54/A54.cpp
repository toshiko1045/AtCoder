#include <bits/stdc++.h>
using namespace std;

int Q;
map<string,int> M;

int main(){
    cin >> Q;
    int q;
    string x;
    int y;
    for(int i=0;i<Q;i++){
        cin >> q;
            if(q==1){
            cin >> x >> y;
            M.emplace(x,y);
        }else if(q==2){
            cin >> x;
            cout << M.at(x) << endl;
        }
    }
}