#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;

    vector<int> A(N+1);
    A.at(0) = 0;
    for(int i=1;i<=N;i++){
        cin >> A.at(i);
    }

    vector<int> Asum(N+1);
    Asum.at(0) = 0;
    for(int i=1;i<=N;i++){
        Asum.at(i) = Asum.at(i-1)+A.at(i);
 
    }

    vector<vector<int>> LR(Q,vector<int>(2));
    for(int i=0;i<Q;i++){
        cin >> LR.at(i).at(0) >> LR.at(i).at(1);
    }

    int l,r;
    int sum=0;
    for(int i=0;i<Q;i++){
        l=LR.at(i).at(0)-1;
        r=LR.at(i).at(1);
        sum=0;
        sum = Asum.at(r)-Asum.at(l);
        cout << sum << endl << endl;
    }
}