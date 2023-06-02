#include <bits/stdc++.h>
using namespace std;

int L,R;

int main(){
    cin >> L >> R;

    string s = "atcoder";

    for(int i=L-1;i<R;i++){
        cout << s.at(i);
    }
    cout << endl;
}