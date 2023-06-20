#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int N,M;
vector<vector<int>> G;

int main(){
    cin >> N >> M;
    G = vector<vector<int>>(N,vector<int>(0));
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        G.at(a-1).push_back(b-1);
        G.at(b-1).push_back(a-1);
    }

    for(int i=0;i<N;i++){
        cout << G.at(i).size() << " ";
        vector<int> T = G.at(i);
        sort(T.begin(),T.end());
        for(int j=0;j<T.size();j++){
            cout << T.at(j)+1 << " ";
        }
        cout << endl;
    }
}