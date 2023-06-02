#include <bits/stdc++.h>
using namespace std;

int N,M,Tsum;
vector<int> T,P,X;

int main(){
    cin >> N;
    T = vector<int>(N+1);
    for(int i=1;i<=N;i++) {
        cin >> T.at(i);
        Tsum += T.at(i);
    }
    cin >> M;
    P = vector<int>(M+1);
    X = vector<int>(M+1);
    for(int i=1;i<=M;i++) {
        cin >> P.at(i) >> X.at(i);
    }

    for(int i=1;i<=M;i++) {
        cout << Tsum-T.at(P.at(i))+X.at(i) << endl;
    }
}