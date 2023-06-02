#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A,nA;

int main(){
    cin >> N;
    A = vector<int>(N+1);
    for(int i=1;i<=N;i++) cin >> A.at(i);
    
    
    for(int i=1;i<=N;i++){
        nA = A;
        
        for(int j=1;j<=i;j++){
            nA.at(j) += *max_element(nA.begin()+1,nA.begin()+1+i);
        }
        cout << accumulate(nA.begin()+1,nA.begin()+1+i,0) << endl;
    }

}