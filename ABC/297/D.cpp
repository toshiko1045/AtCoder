#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t A,B;
    cin >> A >> B;

    int64_t t=0;
    while(A!=B){
        if(A>B) {
            A -= B;
        }else if(A<B){
            B -= A;
        }
        t++;
    }
    cout << t << endl;
}