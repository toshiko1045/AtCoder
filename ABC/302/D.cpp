#include <bits/stdc++.h>
using namespace std;

long long N,M,D;
vector<long long>A,B,AmB;
map<long long  ,long long>MP;

int main(){
    cin >> N >> M >> D;
    A = vector<long long>(N);
    B = vector<long long>(N);
    for(int i=0;i<N;i++) cin >> A.at(i);
    for(int i=0;i<N;i++) cin >> B.at(i);

    AmB = vector<long long>(N+N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            AmB.push_back(-1*llabs(A.at(i)-B.at(j)));
            MP[-1*llabs(A.at(i)-B.at(j))] = A.at(i)+B.at(j);
        }
    }
    sort(AmB.begin(), AmB.end());
    AmB.erase(unique(AmB.begin(), AmB.end()), AmB.end());

    // for(int i=0;i<AmB.size();i++) cout << AmB.at(i) << endl;
    auto pos = lower_bound(AmB.begin(), AmB.end(), -1*D);

    // cout << AmB.at(-1*(*pos)) << endl;
    if(MP[AmB.at(-1*(*pos))]>D) cout << -1 << endl;
    else if(pos!=AmB.end()) cout << MP[AmB.at(-1*(*pos))] << endl;
    else cout << -1 << endl;
}