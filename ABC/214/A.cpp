#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void mypvi(vector<int> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int N;
vector<int> S,T,R;

int main(){
    cin >> N;
    S = vector<int>(N);
    T = vector<int>(N);
    for(int i=0;i<N;i++) cin >> S.at(i);
    for(int i=0;i<N;i++) cin >> T.at(i);

    R = vector<int>(N);
    for(int i=0;i<2*N;i++){
        R.at((i+1)%N) = min(R.at(i%N)+T.at(i%N),R.at((i+1)%N));
    }

}