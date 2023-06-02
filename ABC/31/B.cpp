#include <bits/stdc++.h>
using namespace std;

int L,H,N;

int main(){
    cin >> L >> H >> N;
    int a;
    for(int i=0;i<N;i++){
        cin >> a;
        if(a>H) cout << -1 << endl;
        else if(a<=H && a>=L) cout << 0 << endl;
        else cout << L-a << endl;
    }
}