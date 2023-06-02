#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string w;
    bool b=false;
    for(int i=0;i<N;i++){
        cin >> w;
        if(w=="that"||w=="you"||w=="and"||w=="not"||w=="the"){
            b=true;
            break;
        }
    }
    if(b) cout << "Yes" << endl;
    else cout << "No" << endl;
}