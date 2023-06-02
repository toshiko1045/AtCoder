#include <bits/stdc++.h>
using namespace std;

int my_abs(int a,int b){
    int ret = a-b;
    if(ret<0) ret *= -1;
    return ret;
}

int main(){
    int N,K;
    cin >> N >> K;

    vector<int> A(N+2);
    for(int i=1;i<=N;i++) cin >> A.at(i);

    int64_t sum = 0;
    int lft = 1;
    int rit = 2;
    for(int i=1;i<=N;i++){
        lft = i+1;
        while(A[rit]-A[i]<=K && rit<=N){
            rit++;
        }
        sum += rit-lft;
        rit--;
    }

    cout << sum << endl;
}