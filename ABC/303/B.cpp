#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> a;
map<pair<int ,int>,int>m;

int main(){
    cin >> N >> M;
    a = vector<vector<int>>(M,vector<int>(N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)cin >> a.at(i).at(j);
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<N-1;j++){
            int l = a.at(i).at(j);
            int r = a.at(i).at(j+1);
            m[pair<int,int>(min(l,r),max(l,r))]++;
            // printf("%d,%d\n",min(l,r),max(l,r));
        }
    }
    cout << N*(N-1)/2 - m.size() << endl;
}