#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,S;
    cin >> N >> S;
    vector<int> A(N+2);
    for(int i=1;i<=N;i++) {
        cin >> A.at(i);
    }
    vector< vector<bool> > dp(N+2,vector<bool>(S+2,false));
    for(int i=0;i<N;i++) dp.at(i).at(0)=true;
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=S;j++){
            if(dp.at(i-1).at(j)) dp.at(i).at(j)=1;
            if(j>=A.at(i)){
                if(dp.at(i-1).at(j-A.at(i))) dp.at(i).at(j)=1;
            }
        }
    }
    if(dp.at(N).at(S)) cout << "Yes" << endl;
    else cout << "No" << endl;
}