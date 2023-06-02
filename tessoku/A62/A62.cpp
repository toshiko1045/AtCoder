#include <bits/stdc++.h>
using namespace std;

int N,M;
int A,B; //入力A,Bを記録
vector<vector<int>> G; //隣接リストでグラフを記録
vector<bool> V; //訪問済みならばtrue

void dfs(int now){
    V.at(now)=true;
    for(int i=0;i<G.at(now).size();i++){
        int nex=G.at(now).at(i);
        if(V.at(nex)==false) dfs(nex);
    }
    return;
}

int main(){
    
    cin >> N >> M;
    G = vector<vector<int>>(N+1);
    V = vector<bool>(N+1,false);
    for(int i=1;i<=M;i++){
        cin >> A >> B;
        G.at(A).push_back(B);
        G.at(B).push_back(A);
    }

    dfs(1);

    string ans="The graph is connected.";
    
    for(int i=1;i<V.size();i++){
        if(V.at(i)==false){
            ans="The graph is not connected.";
            break;
        }
    }
    cout << ans << endl;

}