#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int H,W;
vector<vector<char>> S;

int main(){
    cin >> H >> W;
    S = vector<vector<char>>(H+2,vector<char>(W+2,0));
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++)cin >> S.at(i).at(j);
    }

    // 点で, 四方が米2つ以上の時に穴
    for(int i=1;i<=H;i++){ 
        for(int j=1;j<=W;j++){
            int c = 0;
            if(S.at(i).at(j)=='.'){
                if(S.at(i-1).at(j)=='#') c++;
                if(S.at(i+1).at(j)=='#') c++;
                if(S.at(i).at(j-1)=='#') c++;
                if(S.at(i).at(j+1)=='#') c++;
            }
            if(c>=2){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }


}