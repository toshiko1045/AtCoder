#include <bits/stdc++.h>
using namespace std;

int N,K;
vector<int> A;

int main(){
    cin >> N >> K;
    A = vector<int>(N+K,0);
    for(int i=0;i<N;i++) cin >> A.at(i);

    for(int i=K;i<K+N;i++) cout << A.at(i) << " ";
    cout << endl;
    return 0;
}