#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int H,W,R,C;

int main(){
    cin >> H >> W >> R >> C;

    vector<vector<int>> m = vector<vector<int>>(H+2,vector<int>(W+2,false));
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            m[i][j] = true;
        }
    }

    int cnt = 0;
    if(m[R-1][C]) cnt++;
    if(m[R+1][C]) cnt++;
    if(m[R][C-1]) cnt++;
    if(m[R][C+1]) cnt++;

    cout << cnt << endl;
}