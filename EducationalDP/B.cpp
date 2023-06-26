#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

void mypvi(vector<int> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int N,K;
vector<int> H,dp;

int main(){
    cin >> N >> K;
    H = vector<int>(N+1,0);
    for(int i=1;i<=N;i++) cin >> H.at(i);
    dp = vector<int>(N+1,0);

    for(int i=1;i<=N;i++){
        int m=INT_MAX;
        for(int j=1;j<=min(K,i-1);j++){
            // cout << dp.at(i-j)+abs(H.at(i)-H.at(i-j)) << m << endl;
            dp.at(i) = min(dp.at(i-j)+abs(H.at(i)-H.at(i-j)),m);
            m = dp.at(i);
        }
    }
    // mypvi(dp);
    cout << dp.at(N) << endl;
}