#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    
    char t=S.at(0);
    bool b=false;
    for(int i=1;i<N;i++){
        if(t==S.at(i)) b=true;
        t=S.at(i);
    }
    if(b) cout << "No" << endl;
    else cout << "Yes" << endl;
}