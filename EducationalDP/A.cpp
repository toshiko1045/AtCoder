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

int N;
vector<int> H,dp;

int main(){
    cin >> N;
    H = vector<int>(N+1,0);
    for(int i=1;i<=N;i++) cin >> H.at(i);
    dp = vector<int>(N+1);

    dp.at(1)=0;
    dp.at(2)=abs(H.at(2)-H.at(1));
    for(int i=3;i<=N;i++){
        dp.at(i) = min(dp.at(i-1)+abs(H.at(i)-H.at(i-1)),dp.at(i-2)+abs(H.at(i)-H.at(i-2)));
    }
    // mypvi(dp);
    cout << dp.at(N) << endl;
}