#include <bits/stdc++.h>
using namespace std;

int N,M;
int A,B;
vector<vector<int>> G;
vector<int> D;
queue<int> Q;

int main(){
    cin >> N >> M;
    D=vector<int>(N+1,-1);
    G=vector<vector<int>>(N+1);
    for(int i=0;i<M;i++){
        cin >> A >> B;
        G.at(A).push_back(B);
        G.at(B).push_back(A);
    }
    Q.push(1);
    D.at(1)=0;
    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(int i=0;i<G.at(now).size();i++){
            int nex = G.at(now).at(i);
            if(D.at(nex)==-1){
                D.at(nex) = D.at(now)+1;
                Q.push(nex);
            }
        }
    }

    for(int i=1;i<D.size();i++)cout << D.at(i) << endl;
}