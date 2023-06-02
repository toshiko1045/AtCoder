#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> S;

int main(){
    cin >> N;
    S = vector<string>(N+1);
    for(int i=1;i<=N;i++) cin >> S.at(i);

    for(int i=N;i>=1;i--) cout << S.at(i) << endl;
    return 0;
}