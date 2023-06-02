#include <bits/stdc++.h>
using namespace std;

int N,M,r;
vector<int> A;
vector<int> B;

int main(){
    cin >> N >> M;
    A = vector<int>(N+1);
    B = vector<int>(M+1);
    for(int i=1;i<=N;i++) cin >> A.at(i);
    for(int i=1;i<=M;i++) cin >> B.at(i);

    for(int i=1;i<=M;i++){
        r += A.at(B.at(i));
    }
    cout << r << endl;
}