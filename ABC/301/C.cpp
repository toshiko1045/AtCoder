#include <bits/stdc++.h>
using namespace std;

int N;
string S,T;

int main(){
    cin >> S >> T;
    N = (int)(S.length());
    int tn=0;
    int sn=0;
    for(int i=0;i<N;i++){
        char s = S.at(i);
        char t = T.at(i);
        if(s=='a'||s=='t'||s=='c'||s=='o'||s=='d'||s=='e'||s=='r'||s=='@') tn++;
        if(t=='a'||t=='t'||t=='c'||t=='o'||t=='d'||t=='e'||t=='r'||t=='@') sn++;
    }
    if(tn==sn) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}