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
    for(int i=3;i<=N;i++) dp.at(i)=(dp.at(i-1)+A.at(i)<dp.at(i-2)+B.at(i))?dp.at(i-1)+A.at(i):dp.at(i-2)+B.at(i);
    
    int tmp=N;
    int cnt=1;
    vector<int> ans;

    while(true){
        if(dp.at(tmp)==dp.at(tmp-1)+A.at(tmp)) {
            ans.push_back(tmp-1);
            tmp -= 1;
        }else {
            ans.push_back(tmp-2);
            tmp -= 2;
        }
        cnt++;
        if(tmp<=1) break;
    }
    cout << cnt << endl;
    
    for(int i=ans.size()-1;i>=0;i--) {
        cout << ans.at(i);
        cout << " ";
    }
    cout << N << endl;
}