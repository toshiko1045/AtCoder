#include <bits/stdc++.h>
using namespace std;

int N;
string S,T;

int main(){
    cin >> N >> S >> T;
    
    int c=0;
    for(int i=0;i<N;i++){
        if(S.at(i)==T.at(i)) c++;
        else if(S.at(i)=='1' && T.at(i)=='l') c++;
        else if(S.at(i)=='l' && T.at(i)=='1') c++;
        else if(S.at(i)=='0' && T.at(i)=='o') c++;
        else if(S.at(i)=='o' && T.at(i)=='0') c++;
    }
    if(c==N) cout << "Yes" << endl;
    else cout << "No" << endl;
}