#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W,N;
    cin >> H >> W >> N;

    vector<vector<int>> dim(H+1,vector<int>(W+2));
    int A,B,C,D;
    for(int i=1;i<=N;i++){
        cin >> A >> B >> C >> D;
        for(int j=A;j<=C;j++){
            dim.at(j).at(B) += 1;
            dim.at(j).at(D+1) -= 1;
        }
    }

    int res;
    for(int i=1;i<=H;i++){
        res=0;
        for(int j=1;j<=W;j++){
            res+=dim.at(i).at(j);
            cout << res;
            cout << " ";
        }
        cout << endl;
    }
}