#include <bits/stdc++.h>
using namespace std;

int N,A;
vector<vector<int>> G;
vector<int> dp;

int main(){
    cin >> N;
    G = vector<vector<int>>(N+1);
    dp= vector<int>(N+1,0);
    for(int i=2;i<=N;i++){
        cin >> A;
        G.at(A).push_back(i);
    }

    for(int i=N;i>=1;i--){
        for(int j=0;j<G.at(i).size();j++) dp.at(i) += dp.at(G.at(i).at(j)) + 1;
    }

    for(int i=1;i<=N;i++) cout << dp.at(i) << " ";
    cout << endl;
}