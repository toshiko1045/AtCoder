#include <bits/stdc++.h>
using namespace std;

string S;

int main(){
    cin >> S;
    // cout << (int)'A' << " " << (int)'Z' << endl;
    for(int i=0;i<S.size();i++){
        char s = S.at(i);
        if(s>=65 && s<=90){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}