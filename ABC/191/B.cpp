#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N,X;
vector<int> A;

int main(){
    cin >> N >> X;
    A = vector<int>(N);
    for(int i=0;i<N;i++) cin >> A.at(i);

    for(int i=0;i<N;i++){
        if(A.at(i)!=X) cout << A.at(i) << " ";
    }
    cout << endl;
}