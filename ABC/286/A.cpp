#include <bits/stdc++.h>
using namespace std;

int N,P,Q,R,S;
vector<int> A;

int main(){
    cin >> N >> P >> Q >> R >> S;
    A = vector<int>(N+1);
    for(int i=1;i<=N;i++) cin >> A.at(i);

    for(int i=1;i<=P-1;i++) cout << A.at(i) << " ";
    for(int i=R;i<=S;i++) cout << A.at(i) << " ";
    for(int i=Q+1;i<=R-1;i++) cout << A.at(i) << " ";
    for(int i=P;i<=Q;i++) cout << A.at(i) << " ";
    for(int i=S+1;i<=N;i++) cout << A.at(i) << " ";
    cout << endl;
    return 0;
}