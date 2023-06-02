#include <bits/stdc++.h>
using namespace std;

int N,M,A,B,C,now,nex,cost;
vector<vector<pair<int,int>>> G;
vector<bool> V;
vector<int> D;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;

int main(){
    cin >> N >> M;
    G = vector<vector<pair<int,int>>>(N+1);
    for(int i=0;i<M;i++){
        cin >> A >> B >> C;
        G.at(A).push_back(make_pair(B,C));
        G.at(B).push_back(make_pair(A,C));
    }
    V = vector<bool>(N+1,false);
    D = vector<int>(N+1,INT_MAX);

    D.at(1)=0;
    Q.push(make_pair(D.at(1),1));
    while(!Q.empty()){
        now=Q.top().second;
        Q.pop();

        if(V.at(now)) continue;

        V.at(now)=true;
        for(int i=0;i<G.at(now).size();i++){
            nex  = G.at(now).at(i).first;
            cost = G.at(now).at(i).second;
            if(D.at(nex)>D.at(now)+cost){
                D.at(nex) = D.at(now)+cost;
                Q.push(make_pair(D.at(nex),nex));
            }
        }
    }

    for(int i=1;i<D.size();i++){
        if(D.at(i)==INT_MAX) cout << -1 << endl;
        else cout << D.at(i) << endl;
    }
}