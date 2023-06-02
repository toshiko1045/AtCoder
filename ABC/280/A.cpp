#include <bits/stdc++.h>
using namespace std;

int H,W,c=0;
vector<string> S;

int main(){
    cin >> H >> W;
    S = vector<string>(H);
    for(int i=0;i<H;i++) cin >> S.at(i);

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S.at(i).at(j)=='#') c++;
        }
    }
    cout << c << endl;
    return 0;
}