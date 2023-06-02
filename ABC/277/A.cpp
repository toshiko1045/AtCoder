#include <bits/stdc++.h>
using namespace std;

int N,X;
vector<int> P;

int main(){
    cin >> N >> X;
    P = vector<int>(N);
    for(int i=0;i<N;i++) cin >> P.at(i);

    for(int i=0;i<N;i++){
        int p = P.at(i);
        if(p==X){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}