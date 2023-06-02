#include <bits/stdc++.h>
using namespace std;

long long N,X,a;
vector<bool> A1,A2;
bool b=false;

int main(){
    cin >> N >> X;
    A1 = vector<bool>(4000000001,false);
    A2 = vector<bool>(4000000001,false);
    for(int i=1;i<=N;i++) {
        cin >> a;
        A1.at(X+a+2000000000) = true;
        A2.at(X-a+2000000000) = true;
        if(A1.at(a+2000000000)||A2.at(-1*a+2000000000)) {
            b = true;
            break;
        }
    }

    if(b) cout << "Yes" << endl;
    else cout << "No" << endl;
}