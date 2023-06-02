#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> A;
int main(){
    A = vector<vector<int>>(6,vector<int>(6,-1));
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++) cin >> A.at(i).at(j);
    }
    bool b = false;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(A.at(i-1).at(j)==A.at(i).at(j) || A.at(i+1).at(j)==A.at(i).at(j) || A.at(i).at(j-1)==A.at(i).at(j) || A.at(i).at(j+1)==A.at(i).at(j)){
                b=true;
                break;
            }
        }
        if(b) break;
    }
    if(b) cout << "CONTINUE" << endl;
    else cout << "GAMEOVER" << endl;
}