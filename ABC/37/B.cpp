#include <bits/stdc++.h>
using namespace std;

int N,Q,L,R,T;
vector<int> a;

int main(){
    cin >> N >> Q;
    a = vector<int>(N+1,0);
    for(int i=0;i<Q;i++){
        cin >> L >> R >> T;
        for(int j=L;j<=R;j++) a.at(j)=T;
    }

    for(int i=1;i<=N;i++)cout << a.at(i) << endl;
}