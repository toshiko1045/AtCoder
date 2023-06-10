#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ld N,T,A;
vector<pair<ld,ld>> H;

int main(){
    cin >> N >> T >> A;
    H = vector<pair<ld,ld>>(N);
    for(int i=0;i<N;i++) {
        cin >> H.at(i).first;
        H.at(i).second=i;
    }
    sort(H.begin(),H.end());
    ld mi = 9999;
    ld idx = -1;
    for(int i=0;i<N;i++){
        if(abs(A-(T-H.at(i).first*0.006))<mi) {
            mi = abs(A-(T-H.at(i).first*0.006));
            idx = H.at(i).second;
        }else break;
    }
    cout << idx+1 << endl;

}