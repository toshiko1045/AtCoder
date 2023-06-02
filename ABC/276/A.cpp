#include <bits/stdc++.h>
using namespace std;

string S;

int main(){
    cin >> S;

    int c=-1;
    for(int i=0;i<S.size();i++){
        char s = S.at(i);
        if(s=='a') c=i+1;
    }
    cout << c << endl;

    return 0;
}