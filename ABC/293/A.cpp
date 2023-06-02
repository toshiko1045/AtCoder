#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int len=S.size();
    char t;
    for(int i=0;i<len/2;i++){
        t=S.at(2*i);
        S.at(2*i)=S.at(2*i+1);
        S.at(2*i+1)=t;
    }
    cout << S << endl;
}