#include <bits/stdc++.h>
using namespace std;

int N,A,B,C,R;

int main(){
    cin >> N >> A >> B;
    R = A+B;
    for(int i=0;i<N;i++){
        cin >> C;
        if(R==C){
            cout << i+1 << endl;
            break;
        }
    }
}