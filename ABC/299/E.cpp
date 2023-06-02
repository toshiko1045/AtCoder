#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> G;
vector<pair<int,int>> G_d;
vector<bool> G_b;
queue<int> q;

int main(){
    cin >> N >> M;
    G   = vector<vector<int>>(N+1);
    G_m = vector<pair<int,int>>(N+1);
    int u,v;
    for(int i=1;i<=M;i++){
        cin >> u >> v;
        G.at(u).push_back(v);
        G.at(v).push_back(u);
        
    }

    
    for(int i=1;i<=N;i++){
        G_b = vector<bool>;
        for(int j=0;j<G.at(i).size();j++) q.push(G.at(i).at(j));
        for(int j=1;j<=N;j++){
            q.front();q.pop();
        }
    }

}