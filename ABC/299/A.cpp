#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main(){
    cin >> N >> S;

    char c;
    int t=0;
    for(int i=0;i<N;i++){
        c = S.at(i);
        if(c=='|' && t==0) t++;
        else if(c=='*' && t==1) t++;
        else if(c=='|' && t==2) t++;
    }
    if(t==3) cout << "in" << endl;
    else cout << "out" << endl;
}