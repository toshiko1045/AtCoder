#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,W;
    cin >> N >> W;
    vector<long long> w(N+2),v(N+2);
    for(int i=1;i<=N;i++) cin >> w.at(i) >> v.at(i);

    vector<vector<long long>> dp(N+2,vector<long long>(W+2,numeric_limits<long long>::min()));
    dp.at(0).at(0)=0;
    for(int i=1;i<=N;i++){ //iは品物番号
        for(int j=0;j<=W;j++){ //jは重さの上限
            if(j>=w.at(i)) dp.at(i).at(j)=(dp.at(i-1).at(j)>dp.at(i-1).at(j-w.at(i))+v.at(i))?dp.at(i-1).at(j):dp.at(i-1).at(j-w.at(i))+v.at(i);
            else dp.at(i).at(j)=dp.at(i-1).at(j);
        }
    }

    long long ans=0;
    for(int i=0;i<=W;i++) ans=(ans>dp.at(N).at(i))?ans:dp.at(N).at(i);
    cout << ans << endl;
}