#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;
    bool b = true;
    for(int i=2;i<N;i++){
        if(N%i == 0){
            b=false;
            break;
        }
    }
    cout << (b?"YES":"NO") << endl;
}