#include <bits/stdc++.h>
using namespace std;

int N,sm;
vector<int> P;
vector<string> S;

int main(){
    cin >> N;
    S = vector<string>(N+1);
    P = vector<int>(N+1);
    for(int i=1;i<=N;i++){
        cin >> S.at(i) >> P.at(i);
        sm += P.at(i);
    }

    for(int i=1;i<=N;i++){
        if(sm/2<P.at(i)) {
            cout << S.at(i) << endl;
            return 0;
        }
    }
    cout << "atcoder" << endl;
    return 0;

}