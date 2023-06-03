#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int N;

int main(){
    cin >> N;
    if(N<=999) {
        cout << N << endl;
        return 0;
    }
    int n = to_string(N).size()-3;
    n = pow(10,n);
    cout << N/n;
    for(int i=0;i<to_string(N).size()-3;i++)cout << 0;
    cout << endl;

}