#include <bits/stdc++.h>
using namespace std;

int N,K,m;
vector<int> h;

int main(){
    cin >> N >> K ;
    h = vector<int>(N);
    for(int i=0;i<N;i++) cin >> h.at(i);

    sort(h.begin(),h.end());
    m = 1000000000;
    for(int i=N-K;i>=0;i--){
        m = min(h.at(i+K-1)-h.at(i),m);
    }
    cout << m << endl;
}