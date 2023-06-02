#include <bits/stdc++.h>
using namespace std;

int N,M,c,Ans;
vector<int> A,B;
vector<pair<int,int>> C;
vector<int> P; //親を記録
vector<int> S; //ノード数を記録

int root(int n){
    int x = n;
    while(true){
        if(P.at(x)==-1) return x;
        else x = P.at(x);
    }
}

int main(){
    cin >> N >> M;
    A = vector<int>(M+1);
    B = vector<int>(M+1);
    C = vector<pair<int,int>>(M);
    for(int i=1;i<=M;i++) {
        cin >> A.at(i) >> B.at(i) >> c;
        C.at(i-1).first  = c;
        C.at(i-1).second = i;
    }
    sort(C.begin(),C.end());

    P = vector<int>(N+1,-1);
    S = vector<int>(N+1,1);

    Ans=0;
    for(int i=0;i<M;i++){
        int u  = A.at(C.at(i).second);
        int v  = B.at(C.at(i).second);
        int ru = root(u);
        int rv = root(v);
        int su = S.at(ru);
        int sv = S.at(rv);
        if(ru!=rv){
            if(su>sv){
                P.at(rv)=ru;
                S.at(ru)=su+sv;
            }else{
                P.at(ru)=rv;
                S.at(rv)=su+sv;                
            }
            Ans += C.at(i).first;
        }
    }

    cout << Ans << endl;

}