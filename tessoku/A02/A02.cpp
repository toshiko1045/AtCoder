#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;

    bool res = false;
    int A;
    for(int i=0;i<N;i++){
        cin >> A;
        if(A==X){
            res=true;
            break;
        }
    }
    if(res){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}