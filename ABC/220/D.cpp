#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int N;
vector<int> A;
vector<vector<ull>> dp;

int main(){
    cin >> N;
    A = vector<int>(N);
    for(int i=0;i<N;i++) cin >> A.at(i);

    dp = vector<vector<ull>>(N,vector<ull>(10,0));
    dp[0][A[0]]=1;
    for(int i=0;i<=N-2;i++){
        for(int j=0;j<=9;j++){
            dp.at(i+1).at((j+A.at(i+1))%10)+=dp.at(i).at(j);
            dp.at(i+1).at((j*A.at(i+1))%10)+=dp.at(i).at(j);
        }
    }

    for(int i=0;i<=9;i++){
        cout << dp[N-1][i]%998244353 << endl;
    }
}