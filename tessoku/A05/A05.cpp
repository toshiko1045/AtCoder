#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;

    int res = 0;
    for(int i=1;i<=N;i++){
        if(K-i-N-N > 0){
            continue;
        }
        for(int j=1;j<=N;j++){
            if(K-i-j-N > 0){
                continue;
            }
            if(K-i-j <= 0){
                break;
            }
            if(K-i-j <= N){
                res+=1;
            }
        }
    }
    cout << res << endl;
}