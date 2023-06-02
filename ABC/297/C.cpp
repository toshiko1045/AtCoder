#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> S(H+2);
    for(int i=1;i<=H;i++){
        cin >> S.at(i);
    }

    for(int i=1;i<=H;i++){
        for(int j=0;j<W-1;j++){
            if(S.at(i).at(j)=='T' && S.at(i).at(j+1)=='T'){
                S.at(i).at(j)  ='P';
                S.at(i).at(j+1)='C';
            }
        }
    }

    for(int i=1;i<=H;i++){
        cout << S.at(i) << endl;
    }

}