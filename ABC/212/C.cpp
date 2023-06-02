#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> A,B;

int main(){
    cin >> N >> M;
    A = vector<int>(N);
    B = vector<int>(M);
    for(int i=0;i<N;i++) cin >> A.at(i);
    // for(int i=0;i<M;i++) cin >> B.at(i);

    int m=1000000000;
    int t;
    for(int i=0;i<M;i++){
        cin >> B.at(i);
        for(int j=0;j<N;j++){
            t = abs(B.at(i)-A.at(j));
            m = m>t?t:m;
        }
    }
    cout << m << endl;
}