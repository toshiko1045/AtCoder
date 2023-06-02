#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N+1);
    for(int i=1;i<=N;i++){
        cin >> A.at(i);
    }

    int l,m,r;
    l = 1;
    r = 1000000000;
    
    int sum;
    while(l<r){
        // cout << l;
        // cout << " ";
        // cout << m;
        // cout << " ";
        // cout << r << endl;
        m = (l+r)/2;
        sum = 0;
        for(int i=1;i<=N;i++){
            sum += m/A.at(i);
        }

        if(K<=sum){
            r = m;
        }
        if(sum<K){
            l = m+1;
        } 

        // if(K==sum){
        //     cout << m << endl;
        //     break;
        // }
        
    }
    // if(l==r){
    cout << r << endl;
    // }
}