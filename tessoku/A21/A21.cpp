#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> P(N+2),A(N+2);
    for(int i=1;i<=N;i++) cin >> P.at(i) >> A.at(i);

    vector<vector<int>> dp(N+2,vector<int>(2,0)); //dp.at(左端).at(右端)=そこまでのスコア
    dp.at(1).at(N)=0;
    for(int i=1;i<=N;i++){
        for(int j=N;j<=i)
    }

}