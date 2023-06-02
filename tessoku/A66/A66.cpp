#include <bits/stdc++.h>
using namespace std;

int N,Q,q,u,v;
vector<int> P; //親を記録
vector<int> S; //根のindexにノード数を記録

int root(int n){
    int x = n;
    while(true){
        if(P.at(x)==-1) return x;
        else x = P.at(x);
    }
}

int main(){
    cin >> N >> Q;
    P = vector<int>(N+1,-1); //親を記録, 親無しは-1
    S = vector<int>(N+1,1);  //ノード数を記録, 初期は1
    for(int i=0;i<Q;i++){
        cin >> q >> u >> v;
        int ru = root(u);
        int rv = root(v);
        int su = S.at(ru);
        int sv = S.at(rv);
        if(q==1 && ru!=rv){
            if(su>sv){
                P.at(rv) = ru;
                S.at(ru) = su + sv;
            }else{
                P.at(ru) = rv;
                S.at(rv) = su + sv;
            }
        }else if(q==2){
            if(ru==rv) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}