#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N+1);
    for(int i=1;i<=N;i++){
        cin >> A.at(i);
    }
    
    vector<int> Amaxl(N+1);
    for(int i=1;i<=N;i++){
        Amaxl.at(i) = Amaxl.at(i-1)>A.at(i)?Amaxl.at(i-1):A.at(i);
    }
    vector<int> Amaxr(N+2);
    for(int i=N;i>=1;i--){
        Amaxr.at(i) = Amaxr.at(i+1)>A.at(i)?Amaxr.at(i+1):A.at(i);
    }

    int D;
    cin >> D;
    vector<int> res(D);
    int l,r;
    for(int i=0;i<D;i++){
        cin >> l >> r;
        res.at(i)=Amaxl.at(l-1)>Amaxr.at(r+1)?Amaxl.at(l-1):Amaxr.at(r+1);
    }
    for(int i=0;i<D;i++){
        cout << res.at(i) << endl;
    }
    
}