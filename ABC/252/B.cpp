#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N,K;
vector<int> A;
vector<int> B;

int main(){
    cin >> N >> K;
    A = vector<int>(N+1);
    B = vector<int>(K+1);
    for(int i=1;i<=N;i++) cin >> A.at(i);
    for(int i=1;i<=K;i++) cin >> B.at(i);

    int idx = distance(A.begin(),max_element(A.begin(),A.end()));
    auto itr = find(B.begin(),B.end(),idx);
    if(itr==B.end()) cout << "No" << endl;
    else cout << "Yes" << endl;
}