#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,D;
    cin >> N >> D;
    vector<int> T(N+2);
    for(int i=1;i<=N;i++) cin >> T.at(i);

    int ans=-1;
    for(int i=1;i<=N-1;i++){
        if(T.at(i+1)-T.at(i)<=D){
            ans = T.at(i+1);
            break;
        }
    }
    cout << ans << endl;
}