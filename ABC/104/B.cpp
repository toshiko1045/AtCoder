#include <bits/stdc++.h>
using namespace std;

string S;

int main(){
    cin >> S;

    bool a = false;
    int c = 0;
    int b = 0;

    if(S.at(0)=='A') a=true;
    for(int i=1;i<S.size();i++){
        if(i>=2 && i<=S.size()-2 && S.at(i)=='C') {
            c++;
        }else if(S.at(i)>=97 && S.at(i)<=122) b++;
    }
    if(a && c==1 && b==(S.size()-2)) cout << "AC" << endl;
    else cout << "WA" << endl;
}