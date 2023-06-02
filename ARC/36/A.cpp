#include <bits/stdc++.h>
using namespace std;

int N,K;
vector<int> t,tsum;

int main(){
    cin >> N >> K;
    t = vector<int>(N,0);
    tsum = vector<int>(N,0);
    cin >> t.at(0) >> t.at(1) >> t.at(2);
    tsum.at(0) = t.at(0);
    tsum.at(1) = tsum.at(0) + t.at(1);
    tsum.at(2) = tsum.at(1) + t.at(2);
    if(N>3){
        for(int i=3;i<N;i++){
            cin >> t.at(i);
            tsum.at(i) += tsum.at(i-1)+t.at(i) - t.at(i-3);
        }
        for(int i=2;i<N;i++){
            if(tsum.at(i)<K){
                cout << i+1 << endl;
                return 0;
            }
        }
    }else{
        for(int i=2;i<N;i++){
            if(tsum.at(i)<K){
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}