#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

void mypvi(vector<int> v){
    int s = v.size();
    for(int i=0;i<s;i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

ull K,N,Q;
vector<ull> A,B;
int main(){
    cin >> N >> K >> Q;
    A = vector<ull>(N,0);
    for(ull i=0;i<Q;i++){
        ull X,Y;
        cin >> X >> Y;
        A.at(X-1) = Y;
        B = A;
        sort(B.begin(),B.end());
        cout << (ull)accumulate(B.begin()+B.size()-K,B.end(),0) << endl;
        // mypvi(A);
    }
}
