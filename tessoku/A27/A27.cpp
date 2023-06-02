#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B; //A>=Bにする
    int t;
    if(A<B){
        t=A;
        A=B;
        B=t;
    }

    int BB;
    int res;
    while(true){
        BB = A%B;
        if(BB==0){
            res = B;
            break;
        }
        A = B;
        B = BB;
    }
    cout << res << endl;
}