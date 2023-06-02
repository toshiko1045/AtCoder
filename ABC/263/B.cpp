#include <bits/stdc++.h>
using namespace std;

int N,r=1;
vector<int> P;

int main(){
    cin >> N;
    P = vector<int>(N+1);
    for(int i=2;i<=N;i++) cin >> P.at(i);

    int p = P.at(N);
    while(true){
        int n = P.at(p);
        r++;
        if(n<=1) break;
        p = n;
    }
    cout << r << endl;
    return 0;
}