#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(M+1),B(M+1);
    vector<vector<int>> G(N+1);
    for(int i=1;i<=M;i++) {
        cin >> A.at(i) >> B.at(i);
        G[A.at(i)].push_back(B.at(i));
        G[B.at(i)].push_back(A.at(i));
    }

    for(int i=1;i<=N;i++){
        cout << to_string(i)+": {";
        for(int j=0;j<G.at(i).size();j++){
            if(j!=0) cout << ", ";
            cout << G.at(i).at(j);
        }
        cout << "}" << endl;
    }
}