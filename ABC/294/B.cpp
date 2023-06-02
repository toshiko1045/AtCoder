#include <bits/stdc++.h>
using namespace std;

int H,W;


int main(){
    cin >> H >> W;
    vector<vector<int>> A= vector<vector<int>>(H,vector<int>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> A.at(i).at(j);
        }
    }
    int a;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            a=A.at(i).at(j);
            if(a==0)cout << ".";
            else cout << (char)(a+64);
        }
        cout << endl;
    }
}