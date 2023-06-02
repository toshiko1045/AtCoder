#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }

    int l,m,r,t;
    l=0;
    m=N/2;
    r=N;
    while(true){
        if(X<A.at(m)){
            t=m;
            m=(m+l)/2;
            r=t;
        }else if(A.at(m)<X){
            t=m;
            m=(r+m)/2;
            l=t;
        }else if(A.at(m)==X){
            cout << m+1 << endl;
            break;
        }
    }
}