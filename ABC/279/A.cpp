#include <bits/stdc++.h>
using namespace std;

string S;
int c=0;

int main(){
    cin >> S;

    for(int i=0;i<S.size();i++){
        if(S.at(i)=='w') c += 2;
        else c += 1;
    }

    cout << c << endl;
    return 0;
}