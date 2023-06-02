#include <bits/stdc++.h>
using namespace std;

int N,T,A;
string S;

int main(){
    cin >> N >> S;
    for(int i=0;i<N;i++){
        char s = S.at(i);
        if(s=='T') T++;
        else A++;
    }
    if(A>T) cout << "A" << endl;
    else if(A<T) cout << "T" << endl;
    else cout << char('A' + 'T' - S.back()) << endl;
}