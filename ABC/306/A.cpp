#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;
string S;

int main(){
    cin >> N >> S;

    for(int i=0;i<N;i++){
        cout << S.at(i) << S.at(i);
    }

    cout << endl;
}