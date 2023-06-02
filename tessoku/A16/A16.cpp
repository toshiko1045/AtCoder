#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N+2),B(N+2);
    for(int i=2;i<=N;i++) cin >> A.at(i);
    for(int i=3;i<=N;i++) cin >> B.at(i);

    vector<int> dp(N+2);
    dp.at(1)=0;
    dp.at(2)=A.at(2);
    
    for(int i=3;i<=N;i++){
        dp.at(i)= dp.at(i-1)+A.at(i)<dp.at(i-2)+B.at(i)?dp.at(i-1)+A.at(i):dp.at(i-2)+B.at(i);
    }

    cout << dp.at(N) << endl;
}