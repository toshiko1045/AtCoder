#include <bits/stdc++.h>
using namespace std;

char S;

int main(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin >> S;
            if(S=='*'){
                char rets = (char)(96+j);
                cout << rets << to_string(9-i) << endl;
            }
        }
    }
}